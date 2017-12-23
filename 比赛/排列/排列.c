//
// Created by zxw on 17-12-23.
//

#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int temp;
    int flag = 0;
    for(int i = 0;i<n;i++){
        if(array[i] == i+1){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
            flag++;
        }
    }
    printf("%d\n",flag);
    for(int i = 0;i<n;i++){
        printf("% d",array[i]);
    }
}