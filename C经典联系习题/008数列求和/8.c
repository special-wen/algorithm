//
// Created by zxw on 17-12-5.
//
#include <stdio.h>
int main(void){
    int i,j,n;
    long sum = 0,temp = 0;
    printf("Please input a number to n :\n");
    scanf("%d",&n);
    if(n<1){
        printf("The n must no less than 1\n");
        return 0;
    }
    for (i = 0; i <n ; i++) {
        temp = 0;
        for (int j = 0; j <= i ; j++) {
            temp+=j;
        }
        sum += temp;
    }
    printf("The sum of sequence(%d) is %d\n",n,sum);
    getchar();
    getchar();
}
