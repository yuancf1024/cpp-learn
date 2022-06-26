#include<stdio.h>
int test(int a, int b) { return a / b; }

int main(int argc, char *argv[]) { 
    int a = 10;
    int b = 0;
    printf("a=%d, b=%d\n", a, b);
    test(a, b);
    return 0;
}

/*
gcc -g -o cmdTest cmdTest.c
./cmdTest
*/