#include <cstdio>

int main() { 
    int a[3][3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                scanf("%d", &a[i][j][k]); // 输入三维数组a的元素
                a[i][j][k]++; // 自增
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            for (int k = 0; k < 3; k++) {
                printf("%d\n", a[i][j][k]); // 输出三维数组a的元素
            }
        }
    }
    return 0;
}