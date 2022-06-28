// 进一步理解switch语句和break语句

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "请输入整数: ";
    cin >> n;

    switch (n) {
        case 0:
            cout << "A";
            cout << "B";
            break;
        case 2:
            cout << "C";
        case 5:
            cout << "D";
            break;
        case 6:
        case 7:
            cout << "E";
            break;
        default:
            cout << "F";
            break;
        }
        cout << "\n";
}