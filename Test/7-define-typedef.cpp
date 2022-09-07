#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

#define INT_PTR int*
typedef int* int_ptr;

int main() {
    INT_PTR a, b; // b是整型
    int_ptr c, d;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    return 0;
}

/*
Pi
i
Pi
Pi
*/