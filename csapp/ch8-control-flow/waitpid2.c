#include "csapp.h"
#define N 2

int main() { 
    int status, i;
    pid_t pid[N], retpid;

    // 父进程创建N个子进程
    for (i = 0; i < N; i++) {
        if ((pid[i] = Fork()) == 0) // 子进程
            exit(100 + i);
    }

    // 父进程回收N个子进程(不以特定顺序)
    i = 0;
    while ((retpid = waitpid(pid[i++], &status, 0)) > 0) {
        if (WIFEXITED(status))
            printf("child %d terminated normally with exit status=%d\n", retpid,
                   WEXITSTATUS(status));
        else
            printf("child %d terminated abnormally\n", retpid);
    }

    /* 唯一正常的终止是如果没有更多的子进程 */
    if (errno != ECHILD)
        unix_error("waitpid error");

    exit(0);
}
/*
gcc -o waitpid2 waitpid2.c -lcsapp
./waitpid2
*/