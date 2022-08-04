#include <iostream>

using namespace std;

#define area(x) x*x

int main() { 
    int y = area(2 + 2);
    cout << y << endl;
    return 0;
}

/**
 * @brief 
 * 为了避免歧义
 * #define area (x) ((x)*(x))
 * 
 */