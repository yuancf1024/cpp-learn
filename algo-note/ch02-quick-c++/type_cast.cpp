#include <cstdio>

int main() { 
    double r = 12.56;
    int a = 3, b = 5;
    printf("%d\n", (int)r);
    printf("%d\n", a / b);
    printf("%.1f", double(a) / double(b));
    return 0;
}