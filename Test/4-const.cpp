#include <iostream>

using namespace std;

class R {
public:
    R(int r1, int r2) { 
        R1 = r1;
        R2 = r2;
    }
    void print();
    void print() const;
private:
    int R1, R2;
};

void R::print() { 
    cout << R1 << "," << R2 << endl; 
}

void R::print() const {
    cout << R1 << "," << R2 << endl; 
}

int main() {
    R a(5, 6);
    const R b(66, 78);
    a.print();
    // cout << " ";
    b.print();
    return 0;
}