/*************************************************************************
	> File Name: G.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月19日 星期四 21时16分11秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int a,b;
    int sum;
    while(EOF != scanf("%d %d",&a,&b)){
        sum = 0;
        sum = a+b;
        printf("%d\n",sum);
        printf("\\n");
    }
}
