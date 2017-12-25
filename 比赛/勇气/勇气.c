//
// Created by zxw on 17-12-23.
//
#include <stdio.h>
int max(int a);
int min(int a);
int main(void){
    int value;
    scanf("%d",&value);
    char ch[2000];
    int flag = 0;
    int k = 0;
    while (value > 0){
        if(value %2 == 0){
            value = max(value);
            ch[flag] = 'G';
            flag++;
//            printf("G");
        } else{
            value = min(value);
            ch[flag] = 'N';
            flag++;
//            printf("N");
        }
    }
    while (flag > 0){
        printf("%c",ch[flag-1]);
        flag--;
    }
}

int max (int a){
    int temp = (a-2)/2;
    return temp;
}

int min (int a){
    int temp = (a-1)/2;
    return temp;
}