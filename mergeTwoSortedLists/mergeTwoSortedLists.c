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
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    int nums[2000];
    struct ListNode *temp;
    struct ListNode *flag;
    struct ListNode *aa;
    
    
    aa = malloc(sizeof(struct ListNode));
    struct ListNode *head = aa;
    aa->next = NULL;
    temp = l1;
    flag = l2;
    int i = 0;
    int tag;
    while (temp != NULL){
        nums[i] =temp->val;
        i++;
        temp = temp->next;
    }
    while (flag != NULL){
        nums[i] = flag->val;
        i++;
        flag = flag->next;
    }
    int m,n;
    for(m =0;m<i-1;m++){
        for(n = 0;n<i-m-1;n++){
            if(nums[n] > nums[n+1]){
                tag = nums[n];
                nums[n] = nums[n+1];
                nums[n+1] = tag;
            }
        }
    }
    struct ListNode *new;
    for(int m = 0;m<i;m++){
        new = malloc(sizeof(struct ListNode));
        new->val = nums[m];
        new->next = aa->next;
        aa->next = new;
        aa = aa -> next;
    }
    return head->next;
}
