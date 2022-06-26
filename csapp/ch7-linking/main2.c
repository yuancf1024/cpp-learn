#include <stdio.h>
// #include "vector.h"

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

int main() { 
    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    return 0;
}

/*
$ gcc -c main2.c
$ gcc -static -o prog2c main2.o ./libvector.a
等价使用
$ gcc -static -o prog2c main2.o -L. -lvector
$ ./prog2c
*/