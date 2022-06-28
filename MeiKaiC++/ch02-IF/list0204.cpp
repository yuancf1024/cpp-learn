// 读入的整数值是0吗？

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "整数值: ";
    cin >> n;

    if (!n)
        cout << "这个值是0.\n";
    else
        cout << "这个值不是0.\n";
}