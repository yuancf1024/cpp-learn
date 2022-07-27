#include <iostream>

using namespace std;

struct A {
    int a;
    char b[5];
    char c;
} test1, *test2;

int main() {
    cout << sizeof(test1) << " " << sizeof(test2) << endl;
    return 0;
}

/*
12 8
*/