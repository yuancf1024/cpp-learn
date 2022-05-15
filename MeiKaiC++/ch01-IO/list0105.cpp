// 中间夹有空白字符的字符串字面量被连在一起

#include <iostream>

using namespace std;

int main() {
    cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZ"        // 中间夹有空白字符的
            "abcdefghijklmnopqrstuvwxyz\n";     // 字符串字面量被连在一起
}