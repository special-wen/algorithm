//
// Created by zxw on 17-12-23.
//

#include <stdio.h>
int maxNum(int n);

int main(void){
    int N;
    scanf("%d",&N);
    int max;
    max = maxNum(N);
    printf("%d",max);
}

int maxNum(int n){
    int flag = 0;
    int max = 0;
    while (max<=n){
        max = flag*flag;
        flag++;
    }
    flag = flag-2;
    max = flag*flag;
    return max;
}