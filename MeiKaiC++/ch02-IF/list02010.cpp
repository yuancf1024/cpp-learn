// 显示读入的两个整数值中较小的值（其一：if语句）

#include <iostream>

using namespace std;

int main() { 
    int a, b;

    cout << "整数a: ";
    cin >> a;
    cout << "整数b: ";
    cin >> b;

    int min; // 较小值
    if (a < b)
        min = a;
    else
        min = b;

    cout << "较小值为: " << min << ".\n";
}