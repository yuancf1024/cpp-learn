#include "apue.h"

/*
打印进程ID
*/

int main(void) { 
    printf("hello world from process ID %ld\n", (long)getpid());
    exit(0);
}

/*
gcc -o printPID printPID.c 
./printPID
*/