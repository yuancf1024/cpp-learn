#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; // 生成一个空字符串s

    string s(string str); // 拷贝构造函数生成str的复制品

    string s(string str, int stridx); // 将字符串str内"始于位置stridx"的部分当作字符串的初值

    string s(char *str, int stridx, int strlen); // 将字符串str内"始于stridx且长度顶多strlen"的部分作为字符串的初值

    string s(char *cstr); // 将C字符串作为s的初值

    string s(char *chars, int chars_len); // 将C字符串前chars_len个字符作为字符串s的初值

    string s(int num, char c); // 生成一个字符串，包含num个c字符

    string s(char *beg, char &end);  // 以区间beg;end(不包含end)内的字符作为字符串s的初值

    s.~string(); // 销毁s字符，释放内存

    return 0;
}
