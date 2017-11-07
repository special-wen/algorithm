/*************************************************************************
	> File Name: H.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月20日 星期五 13时51分09秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int n;
    int i,j,num,a,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum = 0;
        scanf("%d",&num);
        for(j=0;j<num;j++){
            scanf("%d",&a);
            sum = sum + a;
        }
        if(i < n-1){
        printf("%d\n",sum);
        printf("\n");
        }else{
            printf("%d\n",sum);
        }
    }
}
