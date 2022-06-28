// 显示读入的两个整数值中较小的值（其二：条件运算符）

#include <iostream>

using namespace std;

int main() { 
    int a, b;

    cout << "整数a: ";
    cin >> a;
    cout << "整数b: ";
    cin >> b;

    // int min; // 较小值
    // if (a < b)
    //     min = a;
    // else
    //     min = b;
    // int min = a < b ? a : b; // 较小值

    cout << "较小值为: " <<  (a < b ? a : b) << ".\n";
}