#include <iostream>

using namespace std;

int main(void) { 
    int* p = nullptr;
    int* p2 = new int;
    cout<< p << endl;
    cout<< p2 << endl;

    p = p2;

    delete p2;

    cout<< p << endl; // 指针最初指向的内存已经被释放了
    cout<< *p << endl;
    cout<< p2 << endl; // 指针最初指向的内存已经被释放了
    cout<< *p2 << endl;
    return 0;
}
