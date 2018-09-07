#include <stdio.h>
int main(void){
	int num;
	printf("请输入实际金额");
	scanf("%d",&num);
	int array[3] = {30,50,100};
	for (int i = 0;i<3;i++){
		printf("%d\n", array[i]);
	}
}