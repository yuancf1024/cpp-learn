#include "apue.h"
#include <errno.h>

/*
例示strerror和perror
*/

int main(int argc, char *argv[]) {
    fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);
    exit(0);
}

/*
gcc -o testerror testerror.c error.c
./testerror 
EACCES: Permission denied
./testerror: No such file or directory
*/