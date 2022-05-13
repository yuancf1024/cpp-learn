#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Goats!";
    char t[100];

    memcpy(t, s, sizeof(s)); // 拷贝7个字节，包括终止符

    printf("%s\n", t); // "Goats!"

    return 0;
}