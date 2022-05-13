#include <stdio.h>

union quantity {
    short count;
    float weight;
    float volume;
};

int main() {
    union quantity q;
    q.count = 4;

    union quantity* ptr;
    ptr = &q;

    printf("%d\n", ptr->count); // 4
}