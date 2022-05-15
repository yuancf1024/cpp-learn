// 读入整数值，反转符号，并显示反转结果

#include <iostream>

using namespace std;

int main() {
    int a; // 读入的值

    cout << "整数值:"; // 提示输入的值
    cin >> a; // 向a读入整数值

    int b = -a; // 用反转a的符号后的值来初始化b
    cout << +a << "的符号反转后的值是" << b << "。\n";
}