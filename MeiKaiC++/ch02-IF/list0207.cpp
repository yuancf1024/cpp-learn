// 判断读入的整数值的位数（0、1位数、2位及以上的数）

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "整数值: ";
    cin >> n;

    if (n == 0)
        cout << "这个值是0.\n";
    else if (n >= -9 && n <= 9)
        cout << "这个值是1位数.\n";
    else
        cout << "这个值是2位及以上的数.\n";
}