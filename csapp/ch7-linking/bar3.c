/*bar1.c*/
int x;
// int main() { return 0; }
void f() { 
    x = 15212; // 定义的强符号
}

/*
$ gcc -o foobar3 foo3.c bar3.c
./foobar3
x=15212
*/