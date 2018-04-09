//
// Created by zxw on 18-4-5.
//
#include <stdio.h>
#include <math.h>
int main(void){
    int n,m;
    int flag;
    int temp;
    int sum = 0;
    int count = 1;
    scanf("%d %d",&n,&m);
    flag = n/m/2;
    sum = flag*m*m;
//    for (int i = 1;i<=flag;i++){
//        while (count <= m*i){
//            temp = pow(-1,i)*count;
//            sum = sum+temp;
//            count++;
//        }
//    }
    printf("%d",sum);
}

