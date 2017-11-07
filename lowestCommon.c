/*************************************************************************
	> File Name: lowestCommon.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年11月02日 星期四 20时41分31秒
 ************************************************************************/
#include<stdio.h>
int main(void){
    int num,i,j;
    long long a[1000];
    long long plus,result;
    while(scanf("%d",&num) != EOF){
        for(i= 0;i<num;i++){
            scanf("%lld",&a[i]);
        }
        for(i = 0;i<num;i++){
            for(j = 1;j<=a[i];j++){
                if(a[i] %j == 0 && a[i+1] %j == 0){
                    result = j;
                }
                plus = a[i] * a[i+1];
                a[i+1] =  plus / result;
            }
        printf("%lld\n", plus);
        }
        return 0;
    }
}
