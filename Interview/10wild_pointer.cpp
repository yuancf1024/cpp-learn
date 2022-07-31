#include <iostream>

// using namespace std;

int main(void) { 
    
    int* p;     // 未初始化
    std::cout<< p << std::endl; // 未初始化就被使用
    std::cout<< *p << std::endl; // 未初始化就被使用
    return 0;
}
