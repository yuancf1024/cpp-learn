#include <iostream>

using namespace std;

int func(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int abs(int i) { 
    return i > 0 ? i : -i; 
}

int main() { 
    int n = -3;
    cout << func(n) << endl;
    cout << abs(n) << endl;
}