#include <iostream>
#include <string>

using namespace std;

class CStudent { // 声明基类Student
public:
    CStudent(int n, string nam, char s) { // 基类构造函数
        num = n;
        name = nam;
        sex = s;
    }
    ~CStudent() {} // 基类析构函数
protected: // 保护部分
    int num;
    string name;
    char sex;
};

class CStudent1: public CStudent { // 声明派生类Student1
public: // 派生类的公用部分
    // 派生类构造函数
    CStudent1(int n, string nam, char s, int a, string ad): CStudent(n, nam, s) {
        age = a; // 在函数体中只对派生类新增的数据成员初始化
        addr = ad;
    }
    void show() { 
        cout << "num: " << num << endl;
        cout << "name: " << name << endl;
        cout << "sex: " << sex << endl;
        cout << "age: " << age << endl;
        cout << "address: " << addr << endl << endl;
    }
    ~CStudent1() {} // 派生类析构函数
private: // 派生类的私有部分
    int age;
    string addr;
};

int main() {
    CStudent1 stud1(10010, "Wang-li", 'f', 19, "115 Beijing Road, Shanghai");
    CStudent1 stud2(10011, "Zhang-fun", 'm', 21, "213 Shanghai Road, Beijing");
    stud1.show(); // 输出第一个学生的信息
    stud2.show(); // 输出第二个学生的信息
    return 0;
}

/**
 * @brief 派生类构造函数的使用举例
 * 定义了类CStudent、类CStudent1，其中类CStudent1继承了类CStudent。
 * 类CStudent1比基类新增了两个数据成员。
 * 基类CStudent有自己的带参构造函数，而派生类的构造函数，
 * 则只须对派生类新增的数据成员初始化，不过需要把基类的参数也给带进去。
 * 析构函数的作用是在对象撤销之前，进行必要的清理工作。
 * 当对象被删除时，系统会自动调用析构函数。
 * 
 * 析构函数比构造函数简单，没有类型，也没有参数。
 * 在派生时，派生类是不能继承基类的析构函数的，
 * 也需要通过派生类的析构函数去调用基类的析构函数。
 * 在派生类中可以根据需要定义自己的析构函数，用来对派生类中所增加的成员
 * 进行清理工作；基类的清理工作仍然由基类的析构函数负责。
 * 在执行派生类的析构函数时，系统会自动调用基类的析构函数和
 * 子对象的析构函数，对基类和子对象进行清理。
num: 10010
name: Wang-li
sex: f
age: 19
address: 115 Beijing Road, Shanghai

num: 10011
name: Zhang-fun
sex: m
age: 21
address: 213 Shanghai Road, Beijing
 */