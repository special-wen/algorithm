//
// Created by zxw on 18-4-9.
//

#include <stdio.h>
int main(void){
    char arr[50];
    scanf("%s",arr);
    int length = 0;
    int count=0;
    while (arr[length] != '\0'){
        length++;
    }
    if (arr[0] != arr[1]){
        count++;
    }
    if (arr[length-1] != arr[length-2]){
        count++;
    }
    for (int i = 1; i < length-1; i++) {
        if (arr[i] != arr[i-1] || arr[i] != arr[i+1]){
            count++;
        }
    }
    printf("%d",count);
}

