//
// Created by zxw on 17-12-10.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode{
    int val;
    struct ListNode *next;
};

struct ListNode *l1;
struct ListNode *l2;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2);
int main(void){
    l1 = malloc(sizeof(struct ListNode));
    l2 = malloc(sizeof(struct ListNode));
    l1->next = NULL;
    l2->next = NULL;
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    int nums[2000];
    struct ListNode *temp;
    struct ListNode *flag;
    struct ListNode *aa;
    aa = malloc(sizeof(struct ListNode));
    aa->next = NULL;
    temp = l1->next;
    flag = l2->next;
    int i = 0;
    int tag;
    while (temp != NULL){
        nums[i] =temp->val;
        i++;
    }
    while (flag != NULL){
        nums[i] = flag->val;
        i++;
    }
    for(int m =0;m<i;m++){
        for(int n = m;n<i-m;n++){
            if(nums[m] >= nums[n]){
                tag = nums[m];
                nums[m] = nums[n];
                nums[n] = tag;
            }
        }
    }
    for(int m = 0;m<i;m++){
        aa->val = nums[m];
        aa = aa -> next;
    }
    return aa;
}

