#include <iostream>

using namespace std;

size_t count_calls() { 
    static size_t ctr = 0; // 调用结束后这个值仍有效
    return ++ctr;
}

int main() { 
    for (size_t i = 0; i != 10; ++i) {
        cout << count_calls() << endl;
    }
    return 0;
}