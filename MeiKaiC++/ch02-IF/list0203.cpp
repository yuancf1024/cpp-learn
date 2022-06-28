// 读入的两个整数值相等吗？

#include <iostream>

using namespace std;

int main() { int a, b;
    cout << "整数a: ";
    cin >> a;
    cout << "整数b: ";
    cin >> b;

    if (a == b)
        cout << "两个值相等。\n";
    else
        cout << "两个值不相等。\n";
}