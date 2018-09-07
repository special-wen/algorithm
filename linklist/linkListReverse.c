#include <stdio.h>
#include <stdlib.h>
typedef struct LinkList{
	int id;
	int number;
	struct LinkList *next;
}LinkList;

void createLinkList(LinkList *head){
	scanf("%d",&num);
	LinkList *new,*temp;
	temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	new = (LinkList*)malloc(sizeof(LinkList));
	temp= (LinkList*)malloc(sizeof(LinkList));
	new->next = temp->next;
	temp->next = new;
}





int main(void){
	int n;
	printf("please input the linklist's length:");
	scanf("%d",&n);
	LinkList *head;
	head = (LinkList*)malloc(sizeof(LinkList));
	head->next = NULL:
	head->id = 0;
	for (int i = 0;i<n;i++){
		createLinkList(head);
	}

}