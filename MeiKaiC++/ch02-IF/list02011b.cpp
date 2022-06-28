// 显示读入的两个整数值的差

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

    cout << "差为: " <<  (a < b ? b - a : a - b) << ".\n";
}