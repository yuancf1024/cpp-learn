// 显示读入的月份所属的季节

#include <iostream>

using namespace std;

int main() { 
    int month;

    cout << "判断季节.\n月份: ";
    cin >> month;

    if (month >= 3 && month <= 5)
        cout << "这是春季.\n";
    else if (month >= 6 && month <= 8)
        cout << "这是夏季.\n";
    else if (month >= 9 && month <= 11)
        cout << "这是秋季.\n";
    else if (month == 12 || month == 1 || month == 2)
        cout << "这是冬季.\n";
    
    else
        cout << "\a没有这个月份.\n";
}