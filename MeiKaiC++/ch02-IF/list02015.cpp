// 对两个变量进行降序排序

#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "整数a: ";
    cin >> a;
    cout << "整数b: ";
    cin >> b;

    if (a == b) {
        cout << "两个值相等.\n";
    } else {
        if (a > b) { // 当a大于b时
            int t = a;
            a = b;
            b = t;
        }

    cout << "按a<=b排序.\n";
    cout << "变量a为: " << a << ".\n";
    cout << "变量b为: " << b << ".\n";
    }
}