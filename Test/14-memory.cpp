#include <bits/stdc++.h>

using namespace std;

#define N 3
#define Y(n)((N+1)*n)

void fun(char ch) { cout << (ch + 1) << endl; }

int main() { 
    fun('A');
    // int **a[3][4];
    // cout << sizeof(a) << endl;
    char a[] = "abcd";
    char b[] = {'a', 'b', 'c', 'd'};
    cout << sizeof(a) << " " << sizeof(b);
    int z = 2 * (N + Y(5 + 1));
    cout << z << endl;

    
    return 0;
}