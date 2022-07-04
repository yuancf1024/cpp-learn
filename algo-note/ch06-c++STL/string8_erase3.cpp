#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str = "abcdefg";
    // 删除从3号位开始的2个字符，即de
    str.erase(3, 2); 
    cout << str << endl;
    return 0;
}