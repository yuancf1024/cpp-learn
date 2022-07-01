#include <cstdio>

int main() { 
    int a = 1, b = 2; 
switch(a + b) {
    case 2:
        printf("%d\n", a);
        // break;
    case 3:
        printf("%d\n", b);
        // break;
    case 4:
        printf("%d\n", a + b);
        // break;
    default:
        printf("sad story\n");
    }
    return 0;
}