#include <iostream>
#include <string>

using namespace std;

int main() { 
    string str = "abcxyz", str2 = "opq"; // str是原字符串，str2是待插字符串
    // 在str的3号位(即c和x之间)插入str2
    str.insert(str.begin() + 3, str2.begin(), str2.end());
    cout << str << endl;
    return 0;
}