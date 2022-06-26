int sum(int *a, int n);

int array[2] = {1, 2};

int main() {
    int val = sum(array, 2);
    return val;
}
/*
使用GNU编译系统构造示例程序
$ gcc -Og -o prog main.c sum.c
./prog

# 将C的源程序main.c 翻译成一个ASCII码的中间文件main.i
cpp main.c /tmp/main.i

# 驱动程序运行C编译器cc1，将main.i翻译成一个ASCII汇编语言文件main.s
cc /tmp/main.i -Og -o /tmp/main.s
> main.c:(.text+0x15): undefined reference to `sum'
*/