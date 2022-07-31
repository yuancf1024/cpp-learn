#include <cstdio>

int main() { 
    int i;
    scanf("&d", i); // 正确应该是&i，这里使用i会导致segment fault
    printf("%d\n", i);
    return 0;
}

/*

*/