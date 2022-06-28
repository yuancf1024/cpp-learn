// 判断是否为闰年

#include <iostream>

using namespace std;

int main() { 
    int y;

    cout << "请输入年份: ";
    cin >> y;

    cout << "这个年份";
    if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0)
        cout << "是闰年.\n";
    else
        cout << "不是闰年.\n";
}