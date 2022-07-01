#include <cstdio>

int main() { 
    int n = 12, m = 3;
    n /= m + 1;
    m %= 2;
    printf("%d %d\n", n, m);
    return 0;
}