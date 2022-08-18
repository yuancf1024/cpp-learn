# 参考陈硕大佬的example

# 1
import socket, select
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind(('', 5000))
s.listen(5)
client, address = s.accept() # client.fileno() == 4

# 2
client.recv(1024) # 此处会阻塞
# Out[2]: b'Hello\n'

# 3
epoll = select.epoll()
epoll.register(client.fileno(), select.EPOLLIN) # 试试省略第二个参数

# 4
epoll.poll(60) # 此处会阻塞
# Out[4]: [(18, 1)]

# 5
client.recv(1024) # 已经有数据可读，不会阻塞了
# Out[5]: b'World\n'

# 6
client.setblocking(0) # 改为非阻塞方式
client.recv(1024) # 没有数据可读，立刻返回，错误码EAGIN == 11
# BlockingIOError                           Traceback (most recent call last)
# <ipython-input-7-a695ed62a77d> in <module>
#       1 # 6
#       2 client.setblocking(0) # 改为非阻塞方式
# ----> 3 client.recv(1024) # 没有数据可读，立刻返回，错误码EAGIN == 11

# BlockingIOError: [Errno 11] Resource temporarily unavailable

# 7
epoll.poll(60) # epoll_wait() 一下
# Out[8]: [(18, 1)]

# 8
client.recv(1024) # 再去读数据，立刻返回结果
# Out[9]: b'Bye!\n'

# 9
client.close()

""" 另一个终端的操作
~/cs/cpp-learn$ nc localhost 5000
Hello <enter>
World <enter>
Bye! <enter>
"""