#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    int id;
    struct student *next;
}Student;

void insert(Student *head){
    Student *temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Student *new;
    new  = malloc(sizeof(Student));
    new->id = 100;
    new->next = temp->next;
    temp->next = new;
}

int main(void){
    struct student *head;
    head = malloc(sizeof(Student));
    head->next = NULL;

    insert(head);

}
