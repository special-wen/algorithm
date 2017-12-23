//
// Created by zxw on 17-12-23.
//

#include <stdio.h>
int main(void){
    int n,s;
    scanf("%d %d",&n,&s);
    int array[n];
//    getchar();
    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int tag;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(array[j] > array[j+1]){
                tag = array[j];
                array[j] = array[j+1];
                array[j+1] = tag;
            }
        }
    }
    int value = 0;
    int flag = 0;
    for(int i = 0;i<n;i++){
        value = value + array[i];
        if(value < s){
            flag++;
        } else{
            printf("%d\n",flag);
            return 0;
        }
    }
}