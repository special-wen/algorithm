/*************************************************************************
	> File Name: F.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月17日 星期二 21时49分07秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>


int main(void){
    int N;
    int num;
    int temp,sum;
    while(EOF != scanf("%d",&N)){
        sum = 0;
        for(temp=0;temp<N;temp++){
            scanf("%d",&num);
            sum = sum+num;
        }
        
        printf("%d\n",sum);
    }
}
