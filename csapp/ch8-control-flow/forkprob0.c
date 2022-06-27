#include "csapp.h"

int main() { 
    int x = 1; 
    if (Fork() == 0)
        printf("p1: x=%d\n", ++x);
    printf("p2: x=%d\n", --x);
    exit(0);
}
/*
gcc -o forkprob0 forkprob0.c -lcsapp
./forkprob0

p2: x=0 // 父进程
p1: x=2 // 子进程
p2: x=1 // 子进程
*/