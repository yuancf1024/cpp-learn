#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10]={0,1,2}, *p;
    p = a;
    p += 2;
    cout << p << " " << *p;
    return 0;
}