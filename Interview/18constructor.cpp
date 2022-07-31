#include <iostream>
using namespace std;

class Student{
public:
    Student(){//默认构造函数，没有参数
        this->age = 20;
        this->num = 1000;
    };

    Student(int a, int n):age(a), num(n){}; //初始化构造函数，有参数和参数列表

    Student(const Student& s){//拷贝构造函数，这里与编译器生成的一致
        this->age = s.age;
        this->num = s.num;
    };

    Student(int r){   //转换构造函数,形参是其他类型变量，且只有一个形参
        this->age = r;
		this->num = 1002;
    };

    ~Student(){}
public:
    int age;
    int num;
};

int main(){
    Student s1; // 默认构造函数
    Student s2(18,1001); // 初始化构造函数，有参数和参数列表
    int a = 10;
    Student s3(a); // 转换构造函数,形参是其他类型变量，且只有一个形参
    Student s4(s3); // 拷贝构造函数
    
    printf("s1 age:%d, num:%d\n", s1.age, s1.num);
    printf("s2 age:%d, num:%d\n", s2.age, s2.num);
    printf("s3 age:%d, num:%d\n", s3.age, s3.num);
    printf("s4 age:%d, num:%d\n", s4.age, s4.num);
    return 0;
}
//运行结果
//s1 age:20, num:1000
//s2 age:18, num:1001
//s3 age:10, num:1002
//s2 age:10, num:1002
