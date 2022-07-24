#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct fruit {
    string name;
    int price;
    friend bool operator<(fruit f1, fruit f2) { 
        return f1.price > f2.price; // 以价格低的水果为优先级高
    }
} f1, f2, f3;

int main() { 
    priority_queue<fruit> q;
    f1.name = "桃子";
    f1.price = 3;
    f2.name = "梨子";
    f2.price = 4;
    f3.name = "苹果";
    f3.price = 1;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout << q.top().name << " " << q.top().price << endl;
    return 0;
}