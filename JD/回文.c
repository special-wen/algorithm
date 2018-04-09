//
// Created by zxw on 18-4-9.
//

#include <stdio.h>
#include <string.h>
#define MAX 50
int main(void){
    char arr[MAX];
    int count = 0;
    int sum = 0;
    int i,j;
    scanf("%s",arr);
    while (arr[count] != '\0') {
        count++;
    }
    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (arr[i] == arr[j])
                sum++;
        }
    }
    for (int i = 0; i < count-1; i++) {
        for(j = i+1;j<count;j++){
            if (arr[i]!=arr[j])
                sum++;
        }
    }
    printf("%d",count+sum);
}