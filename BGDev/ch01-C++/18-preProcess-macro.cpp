#include <iostream>

#define N 2+9
using namespace std;

int main() { 
    int a = N * N;
    cout << a << endl;
    return 0;
}
/*
为了避免歧义
只需修改成
# define N (2=9)
*/