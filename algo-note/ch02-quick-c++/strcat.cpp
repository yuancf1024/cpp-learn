#include <cstdio>
#include <cstring>

int main() { 
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    strcat(str1, str2);
    puts(str1);
    return 0;
}