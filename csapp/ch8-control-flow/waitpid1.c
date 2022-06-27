#include "csapp.h"
#define N 2

int main() { 
    int status, i;
    pid_t pid;

    // 父进程创建N个子进程
    for (i = 0; i < N; i++) {
        if ((pid = Fork()) == 0) // 子进程
            exit(100 + i);
    }

    // 父进程回收N个子进程(不以特定顺序)
    while ((pid = waitpid(-1, &status, 0)) > 0) {
        if (WIFEXITED(status))
            printf("child %d terminated normally with exit status=%d\n", pid,
                   WEXITSTATUS(status));
        else
            printf("child %d terminated abnormally\n", pid);
    }

    /* 唯一正常的终止是如果没有更多的子进程 */
    if (errno != ECHILD)
        unix_error("waitpid error");

    exit(0);
}
/*
gcc -o waitpid1 waitpid1.c -lcsapp
./waitpid1
*/

/* $begin waitpid1 */
// #include "csapp.h"
// #define N 2

// int main() 
// {
//     int status, i;
//     pid_t pid;

//     /* Parent creates N children */
//     for (i = 0; i < N; i++)                       //line:ecf:waitpid1:for
// 	if ((pid = Fork()) == 0)  /* Child */     //line:ecf:waitpid1:fork
// 	    exit(100+i);                          //line:ecf:waitpid1:exit

//     /* Parent reaps N children in no particular order */
//     while ((pid = waitpid(-1, &status, 0)) > 0) { //line:ecf:waitpid1:waitpid
// 	if (WIFEXITED(status))                    //line:ecf:waitpid1:wifexited
// 	    printf("child %d terminated normally with exit status=%d\n",
// 		   pid, WEXITSTATUS(status));     //line:ecf:waitpid1:wexitstatus
// 	else
// 	    printf("child %d terminated abnormally\n", pid);
//     }

//     /* The only normal termination is if there are no more children */
//     if (errno != ECHILD)                          //line:ecf:waitpid1:errno
// 	unix_error("waitpid error");

//     exit(0);
// }
// /* $end waitpid1 */