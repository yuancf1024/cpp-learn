// 读入数值并显示相应个数的*

#include <iostream>

using namespace std;

int main() { 
    int n;

    cout << "显示多少个: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        cout << '*';
        i++;
    }
    cout << '\n';
}