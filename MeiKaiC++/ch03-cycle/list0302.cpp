// 根据读入的数值显示猜拳手势（只接收0、1、2）

#include <iostream>

using namespace std;

int main() { 
    int hand; 

    do {
        cout << "请选择手势(0...石头 1...剪刀 2...布): ";
        cin >> hand;
    } while (hand < 0 || hand > 2); // 循环的继续条件
    switch (hand) {
        case 0:
            cout << "石头\n";
            break;
        case 1:
            cout << "剪刀\n";
            break;
        case 2:
            cout << "布\n";
            break;
        }
}