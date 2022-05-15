// 读入两个整数值，执行加减乘除运算，并显示计算结果

#include <iostream>

using namespace std;

int main() {
    int x;
    int y;

    cout << "对x和y执行加减乘除运算。\n";

    cout << "x的值为:"; // 提示输入x的值
    cin >> x; // 向x读入整数值

    cout << "y的值为:"; // 提示输入y的值
    cin >> y; // 向y读入整数值

    cout << "x + y 是" << x + y << "。\n"; // 显示x + y的值
    cout << "x - y 是" << x - y << "。\n"; // 显示x - y的值
    cout << "x * y 是" << x * y << "。\n"; // 显示x * y的值
    cout << "x / y 是" << x / y << "。\n"; // 显示x / y的值（商）
    cout << "x % y 是" << x % y << "。\n"; // 显示x % y的值（余数）
}