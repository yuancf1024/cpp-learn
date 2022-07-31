#include <iostream>

using namespace std;

int main() { int i = 5;
    void* pInt = &i;
    double d = (*(double*)pInt);
    cout << "转换后输出: " << d << endl;
    return 0;
}

/*
转换后输出: 5.48667e-07
*/