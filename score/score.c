/*************************************************************************
	> File Name: score.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月21日 星期六 19时25分36秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int n;
    int score[20];
    int sum,i;
    int max,min;
    float averge;
    while(EOF != scanf("%d",&n)){
        sum = 0;
        for(i = 0;i<n;i++){
            scanf("%d",&score[i]);
        }
        max = min = score[0];
        for(i = 0;i<n;i++){
            if(max<score[i])
                max = score[i];
            if(min >score[i]){
                min = score[i];
            }
            sum = sum +score[i];
        }
        sum = sum -max -min;
        averge = sum*1.0 / (n-2);
        printf("%.2f\n",averge);
    }
}
