#include <cstdio>

int main() {
    int n;
    char str[100] = "123";
    sscanf(str, "%d", &n);
    printf("%d\n", n);
    return 0;
}