#include <stdio.h>
#include <stdlib.h>

typedef struct linkList{
	int num;
	int id;
	struct linkList *next;
}Link;
//创建链表
void Insert(Link *head);
//输出
void Print(Link *head);
//交换顺序
Link *Change(Link *head);

int main(void){
	int n;
	printf("请输入期望创建链表的长度:");
	scanf("%d",&n);
	Link *head;
	Link *newHead;
	head = (Link*)malloc(sizeof(Link));
	newHead = (Link*)malloc(sizeof(Link));
	head -> next = NULL;
	head -> id = 0;
	for (int i = 0;i<n;i++){
		Insert(head);
	}
	newHead = Change(head);
	Print(newHead);
}

void Insert(Link *head){
	int num;
	scanf("%d",&num);
	Link *temp,*new;
	temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	new = (Link*)malloc(sizeof(Link));
	new->next = temp->next;
	temp->next = new;
	new->num = num;
	new->id = temp->id +1;
}

Link *Change(Link *head){
	Link *pre,*aft;
	pre = head->next;
	aft = pre->next;
	int changeNum;
	while (aft != NULL && pre != NULL){
		changeNum = pre->num;
		pre->num = aft->num;
		aft->num = changeNum;
		pre = aft->next;
		if(pre){
			aft = pre->next;
		}
	}
	return head->next;
}

void Print(Link *head){
	Link *temp;
	temp = head;
	while (temp != NULL){
		printf("%d ",temp->num);
		temp = temp->next;
	}
}

