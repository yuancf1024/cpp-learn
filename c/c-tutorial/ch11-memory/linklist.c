#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
};


int main() {
    struct node* head;

    // 生成一个三个节点的列表 (11)->(22)->(33)
    head = malloc(sizeof(struct node));

    head->data = 11;
    head->next = malloc(sizeof(struct node));

    head->next->data = 22;
    head->next->next = malloc(sizeof(struct node));

    head->next->next->data = 33;
    head->next->next->next = NULL;

    // 遍历这个列表
    for (struct node *cur = head; cur != NULL; cur = cur->next) {
    printf("%d\n", cur->data);
    }
}

/*
Output:
11
22
33
*/