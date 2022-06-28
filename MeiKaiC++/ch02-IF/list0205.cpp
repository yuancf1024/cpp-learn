// 判断读入的整数值的符号（正、负、0），并显示判断结果

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "整数值: ";
    cin >> n;

    if (n > 0)
        cout << "这个值为正.\n";
    else if (n < 0)
        cout << "这个值为负.\n";
    else
        cout << "这个值为0.\n";
}