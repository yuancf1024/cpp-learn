/*
实现string类是一道考验C++基础知识的好题，
接下来先看这样的一道题目，了解string类的内部实现
*/

#include <bits/stdc++.h>

class String {
public:
    String(const char *str = NULL); // 普通构造函数
    String(const String &other); // 拷贝构造函数
    ~String(); // 析构函数
    String &operator = (const String &other); // 赋值函数
    String &operator + (const String &other); // 字符串拼接
    bool operator == (const String &other); // 判断相等
    int getLength(); // 返回长度
private:
    char *m_data; // 私有变量保存字符串
};

/*
从上述程序可以看到，string类其实是一个对字符串指针有一系列操作动作的类，
也就是说，string类的底层是一个字符串指针。
这一题的参考答案以及注意点如下所示
*/

// 普通构造函数
String::String(const char *str) {
    if (str == NULL) {
        m_data = new char[1];
        *m_data = '\0';
        /* 对空字符串自动申请存放结束标志'\0'的加分点: 对m_data加NULL判断
        */
    } else {
        int length = strlen(str);
        m_data = new char[length + 1];
        strcpy(m_data, str);
    }
}
/*
普通构造函数里需要注意的是，传入的是个char*类型的字符串。
如果传入的str是个空的字符串，那这个string就也是一个空的字符串，
直接用\0赋值。如果传入的str是非空字符串，私有变量m_data就需要
预留length+1的长度，其中“+1”是用来放最后的'\0'的，
因为strlen计算字符串长度时，没把'\0'算进去。
*/

// String 的析构函数
String::~String() {
    if (m_data) {
        delete[] m_data; // 或delete m_data
        m_data = 0;
    }
}
/*
析构函数的主要功能主要是删除成员变量，需要先判断字符指针是否为空，
如果不为空，再将其删除，并将其指向NULL。
*/


// 拷贝构造函数
String::String(const String &other) { // 输入参数为const型
    if (!other.m_data) { // 对m_data 加NULL判断
        m_data = 0;
    }
    m_data = new char[strlen(other.m_data) + 1];
    strcpy(m_data, other.m_data);
}
/*
拷贝构造函数里需要注意的是，传入的参数是个常引用，
这样可以不用新增一个栈变量和参数内容可以保持不变，不被修改。
*/

// 赋值函数
String & String::operator=(const String &other) { // 传入参数为const类型
    if (this != &other) { // 检查是否自身赋值
        delete[] m_data; // 释放原有的内存资源

        if (!other.m_data) { // 对m_data作NULL判断
            m_data = 0;
        } else {
            m_data = new char[strlen(other.m_data) + 1];
            strcpy(m_data, other.m_data);
        }
    }
    return *this; // 返回本对象的引用
}
/*
赋值函数里需要注意的是，如果传入的参数内容已与本身的内容一致，则不需要赋值。
如果传入的参数内容与本身内容不一致，需要先清空本身的内容。
*/

// 字符串拼接
String &String::operator+(const String &other) { 
    String newString;
    if (!other.m_data) { // 传入的参数内容为空
        newString = *this;
    } else if (!m_data) { // 本身内容为空
        newString = other;
    } else { // 两者内容都不为空
        newString.m_data = new char[strlen(m_data) + strlen(other.m_data) + 1];
        strcpy(newString.m_data, m_data);
        strcpy(newString.m_data, other.m_data);
    }
    return newString;
}
/*
字符串连接函数里需要注意的分3种情况：
传入的参数内容为空、本身内容为空或两者内容都不为空。
*/

// 判断相等
bool String::operator==(const String &other) {
    if (strlen(m_data) != strlen(other.m_data)) {
        return false;
    } else {
        return strcmp(m_data, other.m_data) ? false : true;
    }
}
/*
判断相等函数，返回值只有true和false，先判断长度是否一致，再判断内容是否一致。
*/


// 返回长度
int String::getLength() {
    return strlen(m_data); 
}
/*
返回长度函数，只需用strlen直接计算char*的长度即可
*/