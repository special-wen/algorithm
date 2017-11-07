/*************************************************************************
	> File Name: E.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月17日 星期二 21时39分58秒
 ************************************************************************/

#include<stdio.h>

int main(void){
    int N;
    int temp=0,i = 0;
    int length,sum;
    int array[20];
    scanf("%d",&N);
    while(temp<N){
        sum = 0;
        scanf("%d",&length);
        for(i=0;i<length;i++){
            scanf("%d",&array[i]);
        }
        for(i=0;i<length;i++)
            sum = sum+array[i];
        printf("%d\n",sum);
        temp++;
    }
}
