// 判断读入的整数值是否是2位及以上的数

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "整数值: ";
    cin >> n;

    if (n <= -10 || n >= 10)
        cout << "这个值是2位及以上的数.\n";
    else
        cout << "这个值是不到2位的数.\n";
}