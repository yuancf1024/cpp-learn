#include <stdio.h>

int main() {
    int i = 0;
    int *p = &i;
    // int *p = 0;
    printf("%lu\n", sizeof(p));
    printf("%p", p);
} 