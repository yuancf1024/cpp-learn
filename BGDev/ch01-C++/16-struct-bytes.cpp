#include <iostream>

using namespace std;

struct B {
    char a; // 偏移0,占用1Byte
    double b; // 补足7Byte,使偏移量为8
    int c; // 
} test_struct_b;
/**
 * @brief 
 * char a的偏移量为0，占用1Byte；
 * double b指的是下一个可用的地址的偏移量为1，不是sizeof（double）=8，
 * 需要补足7Byte才能使偏移量变为8；
 * int c指的是下一个可用的地址的偏移量为16，是sizeof（int）=4的倍数，
 * 满足int的对齐方式。
 * 故所有成员变量都分配了空间，空间总的大小为1+7+8+4=20，
 * 不是结构的节边界数（即结构中占用最大空间的类型所占用的字节数sizeof（double）=8）的倍数，
 * 所以需要填充4Byte，以满足结构的大小为sizeof（double）=8的倍数，即24
 */

int main() { 
    cout << sizeof(test_struct_b) << endl;
    return 0;
}