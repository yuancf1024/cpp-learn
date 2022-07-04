#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str = "abcdefg";
    str.erase(str.begin() + 4); // 删除4号位(即e)
    cout << str << endl;
    return 0;
}