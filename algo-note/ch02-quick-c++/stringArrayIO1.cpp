#include <cstdio>

int main() { 
    char str[5][5];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            str[i][j] = getchar();
        }
        getchar(); // 这句是为了把输入中每行末尾的换行符吸收掉
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            putchar(str[i][j]);
        }
        putchar('\n');
    }
    return 0;
}