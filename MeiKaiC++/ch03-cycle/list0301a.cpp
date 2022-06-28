// 显示输入的月份所属的季节（循环任意次）
// 不接收"Y", "y", "N", "n"以外的字符串

#include <string>
#include <iostream>

using namespace std;

int main() { 
    string retry; // 再来一次？

    do {
        int month;
        cout << "判断季节.\n月份: ";
        cin >> month;

        if (month >= 3 && month <= 5) // 3月 4月 5月
            cout << "这是春季.\n";
        else if (month >= 6 && month <= 8) // 6月 7月 8月
            cout << "这是夏季.\n";
        else if (month >= 9 && month <= 11) // 9月 10月 11月
            cout << "这是秋季.\n";
        else if (month == 12 || month == 1 || month == 2)  // 12月 1月 2月
            cout << "这是冬季.\n";
        else
            cout << "\a没有这个月份.\n";
        do {
            cout << "再来一次?Y... Yes/N...No: ";
            cin >> retry;
        } while (retry != "Y" && retry != "y" && retry != "N" && retry != "n");
    } while (retry == "Y" || retry == "y");
}