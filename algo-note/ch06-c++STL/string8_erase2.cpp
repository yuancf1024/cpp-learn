#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str = "abcdefg";
    // 删除[str.begin() + 2, str.end() - 1]内的元素, 即cdef
    str.erase(str.begin() + 2, str.end() - 1); 
    cout << str << endl;
    return 0;
}