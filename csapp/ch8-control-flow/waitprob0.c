#include "csapp.h"

int main() {
    if (Fork() == 0) {
        printf("a");
        fflush(stdout);
    }
    else {
        printf("b");
        fflush(stdout);
        waitpid(-1, NULL, 0);
    }
    printf("c");
    fflush(stdout);
    exit(0);
}

/*
gcc -o waitprob0 waitprob0.c -lcsapp
./waitprob0

*/