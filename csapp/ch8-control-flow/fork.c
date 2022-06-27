#include "csapp.h"

int main() { 
    pid_t pid;
    int x = 1;

    pid = Fork();
    if (pid == 0) { /*Child*/
        printf("child: x=%d\n", ++x);
        exit(0);
    }

    /*Parent*/
    printf("parent: x=%d\n", --x);
    exit(0);
}

/*
为了能够正确的编译程序，采用将csapp.c编译成动态库
1. 生成动态库
gcc -shared -fpic -o libcsapp.so csapp.c -lpthread

2. 将动态库.so文件移入 /lib目录下
sudo mv libcsapp.so /lib

3. 编译动态链接
gcc -o fork fork.c -lcsapp
./fork

Output:
parent: x=0
child: x=2

其中 -lcsapp 选项告诉gcc的链接器：去默认寻找目录下，
寻找名为 libcsapp.so 的动态库进行连接。
由于第3步中我们已经将该动态库放入了/lib中，
而该目录是链接器的默认目录之一，所以链接器能够找到。

注意：将csapp.c和csapp.h移动到/usr/include,同时在csapp.h中的#endif前添加
#include <csapp.c>
该种方法无效，遇到报错：
/usr/include/csapp.c:1038:26: note: each undeclared identifier is reported only once for each function it appears in
*/