#include <cstdio>

int main() { int a;
    int* p = &a;
    a = 233;
    printf("%d\n", *p);
    return 0;
}