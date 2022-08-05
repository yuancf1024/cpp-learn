#include <iostream>
#include <string>

using namespace std;

/*声明基类Box*/
class Box {
public:
    Box(int, int, int); // 声明构造函数
    virtual void display(); // 声明输出函数
protected: // 受保护成员，派生类可以访问
    int length, height, width;
};

/*Box类成员函数的实现*/
Box::Box(int l, int h, int w) { // 定义构造函数
    length = l;
    height = h;
    width = w;
}

void Box::display() { // 定义输出函数
    cout << "length: " << length << endl;
    cout << "height: " << height << endl;
    cout << "width: " << width << endl;
}

/*声明公用派生类FilledBox*/
class FilledBox : public Box {
public:
    FilledBox(int, int, int, int, string); // 声明构造函数
    virtual void display(); // 虚函数
    int weight; // 重量
    string fruit; // 装着的水果
};

/*FilledBox类成员函数的实现*/
void FilledBox::display() { // 定义输出函数
    cout << "length: " << length << endl;
    cout << "height: " << height << endl;
    cout << "width: " << width << endl;
    cout << "weight: " << weight << endl;
    cout << "fruit: " << fruit << endl;
}

FilledBox::FilledBox (int l, int h, int w, int we, string f) : Box(l , h, w), weight(we), fruit(f) {}

int main() { // 主函数
    Box box(1, 2, 3); // 定义Box类对象box
    FilledBox fbox(2, 3, 4, 5, "apple"); // 定义FilledBox类对象fbox
    Box *pt = &box; // 定义指向基类对象的指针变量pt
    pt->display();
    pt = &fbox;
    pt->display();
    return 0;
}

/**
 * @brief 使用虚函数可以使得基类指针访问派生类中的同名函数
 * 声明了一个类Box和一个继承于类Box的类FilledBox。
 * 类Box中有一个成员函数display，类FilledBox中也有一个成员函数display，
 * 现在将基类Box中的成员函数display定义为虚函数，
 * 就能使得基类对象的指针变量既可以访问基类的成员函数display，
 * 也可以访问派生类的成员函数display。
 * 
 * 例2.25就展现了虚函数的奇妙作用。
 * 现在用同一个指针变量（指向基类对象的指针变量），
 * 不但输出了box的全部数据，而且还输出了fbox的全部数据，
 * 这就说明已调用了fbox的display函数。
 * 这表明用同一种调用形式"pt->display（）"，
 * 而且pt是同一个基类指针，也可以调用同一类族中不同类的虚函数。
 * 这就是多态性，即对同一消息，不同对象有不同的响应方式。
length: 1
height: 2
width: 3
length: 2
height: 3
width: 4
weight: 5
fruit: apple
 */