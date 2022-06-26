/*bar1.c*/
int x;
// int main() { return 0; }
void f() { 
    x = 15212; // 定义的强符号
}

/*
$ gcc -o foobar4 foo4.c bar4.c
./foobar4
x=15212
*/