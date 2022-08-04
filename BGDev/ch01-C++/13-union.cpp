#include <iostream>

using namespace std;

// 判断系统是big endian还是little endian

/**
 * @brief 
 * big endian是指低地址存放最高有效字节，
 * little endian则是低地址存放最低有效字节
 * 0x0102 : 02 是低位,01是高位
 * 低地址: 0x0000
 * 高地址: 0x0004
 */

union TEST {
    short a;
    char b[sizeof(short)];
};

int main() { TEST test;
    test.a = 0x0102; // 不能引用共用体变量,只能引用共用体变量中的成员
    if (test.b[0] == 0x01 && test.b[1] == 0x02) {
        cout << "big endian." << endl;
    } else if (test.b[0] == 0x02 && test.b[1] == 0x01) {
        cout << "small endian." << endl;
    } else {
        cout << "unknown" << endl;
    }
    return 0;
}