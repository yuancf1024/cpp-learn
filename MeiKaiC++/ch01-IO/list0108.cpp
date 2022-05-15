// 显示两个变量的x与y的和及平均值（变量值不确定）

#include <iostream>

using namespace std;

int main() {
    int x; // x是int型变量
    int y; // y是int型变量

    // x = 63; // 将63赋值给x
    // y = 18; // 将18赋值给y

    cout << "x的值是" << x << "。\n"; // 显示x的值
    cout << "y的值是" << y << "。\n"; // 显示y的值
    cout << "和是" << x + y << "。\n"; // 显示x与y的和
    cout << "平均值是" << (x+y) / 2 << "。\n"; // 显示x与y的平均值
}