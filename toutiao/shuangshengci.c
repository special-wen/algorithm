#include <stdio.h>
#include <stdlib.h>
typedef struct ShuangShengCi{
	char str;
	struct ShuangShengCi *next;
}Shuang;

Shuang *insert(Shuang *head){
	Shuang *p1,*p2;
	head = p1 = p2;
	char str;
	while (scanf("%c",&str) != EOF){
		p1 = (Shuang*)malloc(sizeof(Shuang));
		p1->str = str;
		p2->next = p1;
		p2 = p1;
	}
	p1->next = head;
	return head;
}

int sort(Shuang *head1,Shuang *head2){
	Shuang *p1,*p2;
	head1->next = p1;
	head2->next = p2;
	if (p1->str == p2->str){
		p1 = p1->next;
		p2 = p2->next;
		if (p1)
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	for (int i = 0;i<n;i++){
		int m;
		scanf("%d",&m);
		Shuang *arr[m];
		int temp = 0;
		for (int j = 0;j < m-1;j++){
			Shuang *head;
			head = (Shuang*)malloc(sizeof(Shuang));
			arr[j] = insert(head);
			arr[j+1] = insert(head);
			temp = sort(arr[j],arr[j+1]);
			if (temp == 1){
				printf("Sad\n");
				break;
			}
		}

	}	
}