#include "apue.h"
#include <sys/wait.h>

/*
从标准输入读命令并执行
*/

int main(void) { 
    char buf[MAXLINE]; // from apue.h
    pid_t pid;
    int status;

    printf("%% "); /* print prompt (printf requires %% to print %) */
    while (fgets(buf, MAXLINE, stdin) != NULL) {
        if (buf[strlen(buf)-1] == '\n')
            buf[strlen(buf) - 1] = 0; /* replace newline with null */
        
        if ((pid = fork()) < 0) {
            err_sys("fork error");
        } else if (pid == 0) { /* child */
            execlp(buf, buf, (char *)0); // 调用 execlp 执行从标准输入读入的命令
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }

        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0)
            err_sys("waitpid error");
        printf("%% ");
    }
    exit(0);
}

/*
gcc -o shell1 shell1.c error.c
./shell1
# 输入命令
% date
Tue 28 Jun 2022 09:52:25 AM CST
*/