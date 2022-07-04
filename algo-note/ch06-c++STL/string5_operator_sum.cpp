#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str1 = "abc", str2 = "xyz", str3;
    str3 = str1 + str2; // 将str1和str2拼接，赋值给str3
    str1 += str2; // 将str2直接拼接到str1上

    cout << str1 << endl;
    cout << str3 << endl;
    return 0;
}