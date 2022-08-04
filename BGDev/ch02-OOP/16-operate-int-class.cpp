class Operation_int {
public:
    Operation_int(int a, int b):x(a), y(b){}
    int add() { 
        return x + y; 
    }

    int substract() { 
        return x - y;
    }
private:
    int x, y;
};

/**
 * @brief 操作整数的类
 * 这个类的作用是两个整数的加减，
 * 如果要对两个浮点数做加减，就又得新定义一个类
 */