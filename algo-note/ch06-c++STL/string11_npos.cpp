#include <iostream>
#include <string>

using namespace std;

int main() {
    if (string::npos == -1) {
        cout << "-1 is true." << endl;
    }
    if (string::npos == 4294967295) {
        cout << "4294967295 is also true." << endl;
    }
    return 0;
}

/*
-1 is true.

按任意键关闭终端。
*/