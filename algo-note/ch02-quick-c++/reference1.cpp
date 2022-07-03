#include <cstdio>

void change(int& x) {
    x = 1; 
}

int main() { 
    int a = 10;
    // change(x);
    change(a);
    // printf("%d\n", x);
    printf("%d\n", a);
    return 0;
}