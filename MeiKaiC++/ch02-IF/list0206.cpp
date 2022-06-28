// 在读入的整数值为正时，判断奇偶，并显示判断结果

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "整数值: ";
    cin >> n;

    if (n > 0)
        if (n % 2 == 0)
            cout << "这个值为偶数.\n";
        else
            cout << "这个值为奇数.\n";
    else
        cout << "\a输入了非正值.\n";
}