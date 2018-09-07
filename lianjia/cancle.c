#include <stdio.h>
int main(void){
	int m,n;
	scanf("%d %d",&m,&n);
	int temp = n;
	int flag = 0;
	while (m != temp){
		if (temp %2 != 0){
			flag++;
			temp = temp+1;
		}else{
			flag++;
			temp = temp/2;
		}
	}
	printf("%d\n", flag);
}