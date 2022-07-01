#include <cstdio>

int main() { 
    int n = 3 * 2 + 1;
    int m = (n > 6) && (n < 8);
    n = n + 2;
    printf("%d %d\n", n, m);
    return 0;
}