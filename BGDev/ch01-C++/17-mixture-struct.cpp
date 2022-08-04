#include <iostream>

using namespace std;

typedef union { // 24Byte
    long i; // 8Byte
    int k[5]; // 20Byte -> 24Byte
    char c;
} UDATE;

struct data { // 40Byte
    int cat; // 4Byte
    UDATE cow; // 24Byte
    double dog; // 8Byte
} too;

UDATE temp;

int main() { 
    cout << sizeof(struct data) + sizeof(temp) << endl;
    return 0;
}