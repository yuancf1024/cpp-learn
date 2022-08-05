class Time {
public:
    Time() { // 这就是构造函数
        hour = 0;
        minute = 0;
        second = 0;
    }
    int set_time();
    int get_time();
private:
    int hour, minute, second;
};

// 构造函数也可以在类外定义