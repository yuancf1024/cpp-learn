#include <cstdio>

int main() {
    int n;
    double db;
    char str[100] = "2048:3.14,hello", str2[100];
    sscanf(str, "%d:%lf,%s", &n, &db, str2);
    /* sscanf 将字符数组str中的内容按"%d:%lf,%s"的格式写到int型变量n、double型变量db、char型数组str2中*/
    printf("n = %d, db = %.2f, str2 = %s\n", n, db, str2);
    return 0;
}