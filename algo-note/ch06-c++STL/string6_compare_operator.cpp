#include <cstdio>
#include <string>

using namespace std;

int main() { 
    string str1 = "aa", str2 = "aaa", str3 = "abc", str4 = "xyz"; 
    if (str1 < str2) // 如果str1字典序小于str2，输出ok1
        printf("ok1\n");
    if (str1 != str3) // 如果str1和str3不等，输出ok2
        printf("ok2\n");
    if (str4 >= str3) // // 如果str4字典序大于等于str3，输出ok3
        printf("ok3\n");
    return 0;
}