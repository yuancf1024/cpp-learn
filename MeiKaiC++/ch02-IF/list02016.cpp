// 读入的整数值可以被10整除吗？

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "整数值: ";
    cin >> n;

    if (int mod = n % 10) {
        cout << "这个值不可以被10整除.\n";
        cout << "余数为" << mod << ".\n";
    } else {
        cout << "这个值可以被10整除.\n";
    }
}