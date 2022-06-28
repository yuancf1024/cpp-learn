// 读入的实数值可以被10整除吗？

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // int n;
    double x;

    cout << "实数值: ";
    cin >> x;

    if (double m =fmod(x, 10)) {
        cout << "这个值不可以被10整除.\n";
        cout << "余数为" << m << ".\n";
    } else {
        cout << "这个值可以被10整除.\n";
    }
}