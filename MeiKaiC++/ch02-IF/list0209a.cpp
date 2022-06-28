// 显示读入的月份所属的季节

#include <iostream>

using namespace std;

/*
这段程序有bug：无法正确判断1、2月份

通过添加下面的代码即可解决
else if (month == 1 || month == 2)
*/

int main() { 
    int month;

    cout << "判断季节.\n月份: ";
    cin >> month;

    if (month < 1 || month > 12)
        cout << "\a没有这个月份.\n";
    else if (month == 1 || month == 2)
        cout << "这是冬季.\n";
    else if (month <= 5)
        cout << "这是春季.\n";
    else if (month <= 8)
        cout << "这是夏季.\n";
    else if ( month <= 11)
        cout << "这是秋季.\n";
    else 
        cout << "这是冬季.\n";
}