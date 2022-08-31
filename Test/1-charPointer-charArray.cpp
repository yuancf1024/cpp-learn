#include <bits/stdc++.h>

using namespace std;

int main() {
    // 字符数组
    char acX[] = "abc";
    char acY[] = {'a', 'b', 'c'};

    // 字符指针
    char *szX = "abc";
    char *szY = "abc";

    cout << sizeof(acX) << endl; // 4 字符数组包含尾部的'\0'
    cout << sizeof(acY) << endl; // 3
    cout << sizeof(szX) << endl; // Linux64位指针 占8个字节
    return 0;
}

/*
4
3
8
*/