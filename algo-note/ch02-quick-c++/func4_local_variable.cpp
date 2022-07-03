#include <cstdio>

void change(int x) { 
    x += 1;
}

int main() {
    int x = 10;
    change(x);
    printf("%d\n", x);
    return 0;
}