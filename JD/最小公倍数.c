//
// Created by zxw on 18-4-9.
//
#include <stdio.h>
int gcd(int a,int b){
    if (b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(void){
    int n,i;
    int re=1;
    scanf("%d",&n);
    for(i = 2;i<n;i++){
        int temp = 0;
        temp = gcd(re,i);
        re = (re*i)/temp;
    }
    printf("%ld",re);
}
