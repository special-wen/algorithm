//
// Created by zxw on 17-12-10.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct list1{
    int num1;
    struct list1 *next;
}list1;

typedef struct list2{
    int num2;
    struct list2 *next;
}list2;

typedef struct ListNode{
    int num;
    struct listNode *next;
}ListNode;

list1 *head1;
list2 *head2;
ListNode *head;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
int main(void){
    head1 = malloc(sizeof(list1));
    head2 = malloc(sizeof(list2));
    head1->next = NULL;
    head2->next = NULL;
    mergeTwoLists()
}