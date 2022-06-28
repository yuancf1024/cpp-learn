// 从正整数值倒数到0（其一）

#include <iostream>

using namespace std;

int main() { 
    int x;

    cout << "倒数.\n";
    do {
        cout << "正整数值: ";
        cin >> x;
    } while (x <= 0);

    while (x >= 0) {
        cout << x << "\n"; // 显示x的值
        x--; // x的值递减（值减1）
    } 
    cout << x << "\n"; // 显示x的值
}