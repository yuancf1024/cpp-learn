# include <stdio.h>

struct turtle {
    char* name;
    char* species;
    int age;
};

// struct 直接传入函数

// void happy(struct turtle t) {
//     t.age = t.age + 1;
// }

// int main() {
//     struct turtle myTurtle = {"MyTurtle", "sea turtle", 99};
//     happy(myTurtle);
//     printf("Age is %i\n", myTurtle.age); // 输出 99
//     return 0;
// }

// struct 指针传入函数

void happy(struct turtle *t) {
    t->age = t->age + 1;
}

int main() {
    struct turtle myTurtle = {"MyTurtle", "sea turtle", 99};
    happy(&myTurtle);
    printf("Age is %i\n", myTurtle.age); // 输出 99
    return 0;
}