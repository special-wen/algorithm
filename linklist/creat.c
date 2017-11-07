/*************************************************************************
	> File Name: creat.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月22日 星期日 21时42分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student{
    int id;
    char name[20];
    struct Student *next;
}Stu;

void Insert(Stu *head);//创建一个新的链表
void Print(Stu *head);
int main(void){
    int i;
    Stu *head;
    head = (Stu*)malloc(sizeof(Stu));
    head->next = NULL;
    head->id = 0;
    for(i = 0;i<5;i++){
        Insert(head);
    }
    Print(head);
}

void Insert(Stu *head){
    char name[20];
    scanf("%s",name);
    Stu *temp,*new;
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    new = (Stu*)malloc(sizeof(Stu));
    new->next = temp->next;
    temp->next = new;
    new->id = temp->id + 1;
    strcpy(new->name,name);
   //printf("(%d,%s)->",new->id,new->name);
}

void Print(Stu *head){
    Stu *temp,*last;
    temp = head->next;
    while(temp != NULL){
        printf("%d,%s\n",temp->id,temp->name);
        temp = temp->next;
    }
}
