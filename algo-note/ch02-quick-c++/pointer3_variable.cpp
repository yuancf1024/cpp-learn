#include <cstdio>

int main() { 
    int a;
    int* p = &a;
    *p = 233;
    printf("%d, %d\n", *p, a);
    return 0;
}