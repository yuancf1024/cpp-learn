#include <cstdio>
#include <cmath>

const double eps = 1e-8;
#define Equ(a, b) ((fabs((a) - (b))) < (eps))

int main() {
    double db1 = 4 * asin(sqrt(2.0) / 2);
    double db2 = 3 * asin(sqrt(3.0) / 2);
    if (Equ(db1, db2)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}