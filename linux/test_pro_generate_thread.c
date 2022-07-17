#include <stdio.h>
#include <pthread.h>
#include <errno.h>
#include <string.h>

void *thread(void *vargp) {
    // 让线程循环，不退出
    while(1) {
        sleep(1);
    }
}

int main() { 
    int err = 0, count = 0;
    pthread_t tid;
    
    // 持续创建线程，直到创建失败
    while (err == 0) {
        // 创建线程
        err = pthread_create(&tid, NULL, thread, NULL);
        count++;
        printf("count = %d\n", count);
    }

    printf("create thread error : %s \n", strerror(errno));
    printf(
        "Maxium number of thread within a Process"
        " is : %d\n",
        count);

    // 输入回车键，程序才退出，可以方便观察创建完线程后，进程的top情况
    getchar();

    return 0;
}

/*
gcc -o test_pro_generate_thread test_pro_generate_thread.c -lpthread

./test_pro_generate_thread





# 查看系统版本命令
uname -a
cat /etc/issue # 64 位 Ubuntu 20.04.4 LTS

# 查看进程创建线程时默认分配的栈空间大小
ulimit -a

core file size          (blocks, -c) 0
data seg size           (kbytes, -d) unlimited
scheduling priority             (-e) 0
file size               (blocks, -f) unlimited
pending signals                 (-i) 50682
max locked memory       (kbytes, -l) 64
max memory size         (kbytes, -m) unlimited
open files                      (-n) 4096
pipe size            (512 bytes, -p) 8
POSIX message queues     (bytes, -q) 819200
real-time priority              (-r) 0
stack size              (kbytes, -s) 8192
cpu time               (seconds, -t) unlimited
max user processes              (-u) 50682
virtual memory          (kbytes, -v) unlimited
file locks                      (-x) unlimited

# 64位Ubuntu WSL2 测试结果

count = 32140
create thread error : Resource temporarily unavailable 
Maxium number of thread within a Process is : 32140

# 查看当前系统线程数
top -H

top - 10:01:06 up  8:04,  0 users,  load average: 2.97, 0.86, 0.36
Threads: 32476 total,   1 running, 32475 sleeping,   0 stopped,   0 zombie

# 下面这三个内核参数的大小，都会影响创建线程的上限：

/proc/sys/kernel/threads-max，表示系统支持的最大线程数，默认值是 14553；

/proc/sys/kernel/pid_max，表示系统全局的 PID 号数值的限制，
每一个进程或线程都有 ID，ID 的值超过这个数，进程或线程就会创建失败，
默认值是 32768；

/proc/sys/vm/max_map_count，表示限制一个进程可以拥有的VMA(虚拟内存区域)的数量，
具体什么意思我也没搞清楚，反正如果它的值很小，也会导致创建线程失败，
默认值是 65530。

简单总结：

- 32 位系统，用户态的虚拟空间只有 3G，如果创建线程时分配的栈空间是 10M，
那么一个进程最多只能创建 300 个左右的线程。

- 64 位系统，用户态的虚拟空间大到有 128T，理论上不会受虚拟内存大小的限制，
而会受系统的参数或性能限制。
*/