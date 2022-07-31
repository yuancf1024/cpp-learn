#include <iostream>

using namespace std;

struct Info {
    uint8_t a;
    uint16_t b;
    uint8_t c;
};

struct alignas(4) Info2 {
    uint8_t a;
    uint16_t b;
    uint8_t c;
};

struct Info3 {
    uint8_t a;
    uint32_t b;
    uint8_t c;
};

struct alignas(2) Info4 {
    uint8_t a;
    uint32_t b;
    uint8_t c;
};

int main() {
    cout << "alignas 生效的情况" << endl;
    cout << sizeof(Info) << endl;  // 6  2 + 2 + 2
    cout << alignof(Info) << endl; // 2

    // alignas将内存对齐调整为4个字节。所以sizeof(Info2)的值变为了8
    cout << sizeof(Info2) << endl; // 8  4 + 4
    cout << alignof(Info2) << endl; // 4

    cout << "alignas 失效的情况" << endl;
    cout << sizeof(Info3) << endl; // 12  4 + 4 + 4
    cout << alignof(Info3) << endl; // 4

    // 若alignas小于自然对齐的最小单位，则被忽略。
    cout << sizeof(Info4) << endl; // 12  4 + 4 + 4
    cout << alignof(Info4) << endl; // 4
    return 0;
}

/*
12 8
*/