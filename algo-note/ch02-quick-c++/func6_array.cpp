#include <cstdio>

void change(int a[], int b[][5]) { 
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    b[0][0] = 1;
}

int main() { 
    int a[3] = {0};
    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }

    int b[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    change(a, b);

    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
    return 0; 
}