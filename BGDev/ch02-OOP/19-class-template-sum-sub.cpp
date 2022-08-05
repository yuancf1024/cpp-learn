#include <iostream>

using namespace std;

template<class T> // 声明一个模板,虚拟类型名为T
class Operation {
public:
    Operation (T a, T b):x(a), y(b){}
    // T add() {}
    T add() { 
        return x + y;
    }

    T substract() { 
        return x - y; 
    }
private:
    T x, y;
};

// 如果类模板的成员函数是在类外定义的
// template<class T>
// T Operation<T>::add() {
//     return x + y;
// }

int main() { Operation<int> op_int(1, 2); 
    cout << op_int.add() << " " << op_int.substract() << endl;
    Operation<double> op_double(1.2, 2.3);
    cout << op_double.add() << " " << op_double.substract() << endl;
    return 0;
}

/**
 * @brief 实现了一个类模板，利用它可以分别对两个整数和两个浮点数进行加、减操作。
 * 如果是传入两个整数，则对两个整数进行加减；
 * 如果传入两个浮点数，则对两个浮点数进行加减
 * 
 * Output:
3 -1
3.5 -1.1


 */