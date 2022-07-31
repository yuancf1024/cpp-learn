#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const* argv[]) { 
    const char* str = "name";

    cout << sizeof(str) << endl; // 取的是指针str的长度，是8
    cout << strlen(str) << endl; // 取的是这个字符串的长度，不包含结尾的 \0。大小是4
    return 0;  
}