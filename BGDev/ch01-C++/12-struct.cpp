#include <iostream>
#include <cstring>

using namespace std;

struct student {
    int num;
    char name[20];
    int age;
};

int main() { 
    struct student stu1; // 定义一个student类型的变量stu1
    student stu2; // 定义时也可不用struct
    stu1.num = 1; // 单独对stu1的num元素赋值
    char temp[20] = "Xiao ming";
    strncpy(stu1.name, temp, strlen(temp));
    stu1.age = 10;
    cout << stu1.num << " " << stu1.name << " " << stu1.age << endl;
    student *stu3 = &stu1; // stu3是结构体的指针,指向stu1
    (*stu3).num = 2; // stu1的num值被修改成了2
    cout << stu1.num << " " << stu1.name << " " << stu1.age << endl;
    return 0;
}

/*
// 2022-08-04 为什么会多打印一个字符 V?
1 Xiao mingV 10
2 Xiao mingV 10
*/