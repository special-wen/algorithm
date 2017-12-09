//
// Created by zxw on 17-12-8.
//
#include <stdio.h>
#include <stdlib.h>
char* longestCommonPrefix(char** strs,int strsSize);
int main(void){
    int strsSize = 3;
    char *strs[200] = {"app","apple","apples"};
    char* array;
    array = longestCommonPrefix(strs,strsSize);
    puts(array);
}

char* longestCommonPrefix(char** strs,int strsSize){
    char str;
    char* array;
    int j = 0;
    int temp;
    while (strs[0][j] != '\0'){
        str = strs[0][j];
        for(int i = 1;i<strsSize;i++){
            if(str != strs[i][j]){
                array = malloc(sizeof(char)*(j+1));
                array[j] = '\0';
                for(temp = 0;temp<j;temp++){
                    array[temp] = strs[0][j];
                    return array;
                }
            }
        }
        j++;
    }
}