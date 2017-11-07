/*************************************************************************
	> File Name: linst.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月18日 星期三 22时11分56秒
 ************************************************************************/

#include<stdio.h>
typedef struct Student{
    int id;
    Student *next;
}Student;

int main(void){
    Student *head,*temp;
    malloc(sizeof(head));
    malloc(sizeof(temp));
    head->next = NULL;
    head->next = temp;
    int num;
    scanf("%d",&num);
    Insert(temp,num);
    
}

void Insert(*temp,num){
    head->next = temp;
    if(temp->next != NULL){
        temp->id = num;
        temp = temp->next;
    }
    return temp;
}
