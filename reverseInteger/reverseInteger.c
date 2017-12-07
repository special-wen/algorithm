//
// Created by zxw on 17-12-7.
//
#include <limits.h>
#include <stdio.h>
int reverse(int x);
int main(void){
    int n;
    scanf("%d",&n);
    int y;
    y = reverse(n);
    printf("%d",y);
}
int reverse(int x){
    int flag=1;

    long result;
    if(x<0){
        flag = 0;
        x = x*(-1);
    }
    while (x!=0){
        result = result*10+x%10;
        x = x/10;
        if(result>INT_MAX ||result<INT_MIN){
            return 0;
        }
    }
    if (flag == 0){
        result = result*(-1);
    }
    return result;
}
