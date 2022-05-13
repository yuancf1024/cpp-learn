#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    int *p = malloc(sizeof(int)); //调用 malloc()来分配一些内存
    assert(p != NULL);
    printf("(%d) memory address of p: %08x\n",
    getpid(), (unsigned) p);
    *p = 0;
    while (1) {
        Spin(1);
        *p = *p + 1;
        printf("(%d) p: %d\n", getpid(), *p);
    }
    return 0;
}
/*
gcc -o mem mem.c
./mem # 运行同一个程序的单个实例
（./mem &) && (./mem &) # 运行同一个程序的多个实例
*/