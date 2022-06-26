/*bar5.c*/
double x;
// int main() { return 0; }
void f() { 
    x = -0.0; // 定义的强符号
}

/*
$ gcc -Wall -Og -o foobar5 foo5.c bar5.c
/usr/bin/ld: warning: alignment 4 of symbol `x' in /tmp/ccyie8t4.o is smaller than 8 in /tmp/cc12axk6.o
$ ./foobar5
x=0x0 y=0x80000000
*/