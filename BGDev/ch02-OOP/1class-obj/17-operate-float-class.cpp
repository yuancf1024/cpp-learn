class Operation_double {
public:
    Operation_double(double a, double b):x(a), y(b){}
    double add() { 
        return x + y; 
    }

    double substract() { 
        return x - y;
    }
private:
    double x, y;
};

/**
 * @brief 操作浮点数的类
 * 因为参数的类型不同，所以不能复用，这也使得代码量剧增。
 * 为了解决这类问题，C++中提供了类模板的功能。
 * 可以先声明一个通用的类模板，这个类模板可以有一个或多个虚拟的类型参数，
 * 对以上例子中的两个类，可以定义如例2.23这样的类模板。
 */