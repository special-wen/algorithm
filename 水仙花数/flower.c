//
// Created by zxw on 17-11-26.
//
#include <stdio.h>
void IsFlower(int m,int n);
int main(void){
    int m,n;
    while (EOF != scanf("%d %d",&m,&n)){
        IsFlower(m,n);
    }
    return 0;
}

void IsFlower(int m,int n){
    int i,j,sum;
    int tag = 0;
    int ge,shi,bai;
    if(m>=100 && m<=999 && n>=100 & n<=999){
        for(i=m;i<=n;i++){
            bai = i/100;
            shi = i%100/10;
            ge = i%100%10;
            sum = bai*bai*bai+shi*shi*shi+ge*ge*ge;
            if(sum == i){
                tag++;
                if(tag == 1)
                    printf("%d",i);
                else
                    printf(" %d",i);
            }
        }
        if(tag == 0){
            printf("no");
        }
        sum = 0;
    }
    printf("\n");
}