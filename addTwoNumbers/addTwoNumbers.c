//
// Created by zxw on 18-1-23.
//
#include <stdio.h>
#include <stdlib.h>
struct ListNode{
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
int main(void){

}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l3;
    l3 = malloc(sizeof(struct ListNode));
    l3->val = 0;
    l3->next = NULL;
    struct ListNode* head = l3;
    l3->val = l1->val+l2->val;
    l1 = l1->next;
    l2 = l2->next;
    while (l1 || l2 ||l3->val>9){
        l3->next = malloc(sizeof(struct ListNode));
        l3->next->val = 0;
        l3->next->next = NULL;
        if(l1){
            l3->next->val = l3->next->val+l1->val;
            l1 = l1->next;
        }
        if (l2){
            l3->next->val = l3->next->val+l2->val;
            l2 = l2->next;
        }
        if(l3->val>9){
            l3->next->val=l3->next->val+l3->val/10;
            l3->val=l3->val%10;
        }
        l3 = ls->next;
    }
    return head;
}