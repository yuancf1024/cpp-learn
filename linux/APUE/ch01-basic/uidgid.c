#include "apue.h"

/*
打印用户ID和组ID
*/

int main(void) { 
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    exit(0);
}

/*
gcc -o uidgid uidgid.c error.c
./uidgid
uid = 1000, gid = 1000
*/