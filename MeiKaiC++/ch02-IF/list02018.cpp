// 根据读入的数值显示猜拳手势

#include <iostream>

using namespace std;

int main() { 
    int hand;

    cout << "请选择手势(0...石头 1...剪刀 2...布): ";
    cin >> hand;

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