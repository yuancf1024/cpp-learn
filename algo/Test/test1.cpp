#include <iostream>

using namespace std;

// #define BE(x) 2*x*x*x
#define BE(x) 2*x*x*x
#define B 3
// #define ROW(x) 2*x*x
#define ROW(x) 2*x*x

int main() { 
    int a = 2, b = 3, c, d;
    char st;
    c = BE(++a);
    d = ROW(b + 1);
    st = 'B' + 2;
    cout << "c=" << c << " d=" << d << " st=" << st << endl;
    return 0;
}

/*
2022-06-30
这段带有宏的程序，运行起来的结果有些奇怪

#define BE(x) 2*x*x*x
#define ROW(x) 2*x*x
c=160 d=10 st=D

#define BE(x) x
#define ROW(x) x
c=3 d=4

#define BE(x) x*x
#define ROW(x) x*x
c=16 d=7

#define BE(x) x*x*x
#define ROW(x) x*x*x
c=80 d=10

#define BE(x) x*x*x
#define ROW(x) x*x
c=80 d=7

#define BE(x) 2*x*x*x
#define ROW(x) 2*x*x
c=160 d=10
*/