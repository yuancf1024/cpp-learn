#include "apue.h"
#include <sys/wait.h>

/*
从标准输入读命令并执行
*/

static void sig_int(int); /* our signal-catching function */

int main(void) { 
    char buf[MAXLINE]; // from apue.h
    pid_t pid;
    int status;

    // 调用信号函数
    if (signal(SIGINT, sig_int) == SIG_ERR)
        err_sys("signal error");

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

void sig_int(int signo) { 
    printf("interrupt\n%% "); 
}

/*
gcc -o shell2 shell2.c error.c
./shell2
# 输入命令
% ls
apue.h      file2.md    mycat       myls.c      shell1.c    testerror
error.c     file.list   mycat.c     printPID    shell2      testerror.c
errorlog.c  getcputc    mycat_data  printPID.c  shell2.c    uidgid
file1.md    getcputc.c  myls        shell1      standardIO  uidgid.c
% ^Cinterrupt
*/