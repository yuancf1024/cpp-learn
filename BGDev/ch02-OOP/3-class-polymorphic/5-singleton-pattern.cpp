#include <iostream>

using namespace std;

class CSingleton {
private:
    CSingleton() {
        // 构造函数是私有的
    }
    static CSingleton *m_pInstance;

public:
    static CSingleton *GetInstance() {
        if (m_pInstance == NULL) { // 判断是否第一次调用
            m_pInstance = new CSingleton();
        }
        return m_pInstance;
    }
};

CSingleton *CSingleton::m_pInstance = NULL; // 初始化静态数据成员

int main() { 
    CSingleton *s1 = CSingleton::GetInstance();
    CSingleton *s2 = CSingleton::GetInstance();
    if (s1 == s2) {
        cout << "s1 = s2" << endl; // 程序的执行结果是输出了s1 = s2
    }
    return 0 ;
}

/**
 * @brief 单例模式使用举例
 * 用户访问实例的唯一方法只有GetInstance（）成员函数。
 * 如果不通过这个函数，任何创建实例的尝试都将失败，
 * 因为类的构造函数是私有的。
 * GetInstance（）的返回值是当这个函数首次被访问时被创建的，
 * 所有GetInstance（）之后的调用都返回相同实例的指针。
 * 
 * 单例类CSingleton有以下特征：
 * ①有一个指向唯一实例的静态指针m_pInstance，并且是私有的；
 * ②有一个公有的函数，可以获取这个唯一的实例，并且在需要的时候创建该实例；
 * ③其构造函数是私有的，这样就不能从别处创建该类的实例。
s1 = s2
 */