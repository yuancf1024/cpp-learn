#include <iostream>

using namespace std;

int main() { 
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, j;
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int b[2][2] = {1, 2, 3, 4};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}