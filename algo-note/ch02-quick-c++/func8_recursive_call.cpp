#include <cstdio>

int F(int n) {
    if (n == 0)
        return 1;
    else
        return F(n - 1) * n;
}

int main() { 
    int n;
    scanf("%d", &n);

    printf("%d\n", F(n));
    return 0;
}