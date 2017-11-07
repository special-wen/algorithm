/*************************************************************************
	> File Name: D.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月16日 星期一 22时43分09秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int N;
    int a[20];
    int i;
    int sum;
    while(EOF != scanf("%d",&N)){
        sum = 0;
        if(N != 0){
            for(i = 0;i<N;i++){
                scanf("%d",&a[i]);
            }
            for(i = 0;i<N;i++){
                sum = sum +a[i];
            }
            printf("%d\n",sum);
        }else
            break;
    }
}
