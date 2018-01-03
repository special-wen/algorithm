//
// Created by zxw on 18-1-3.
//
#include <stdio.h>
#include <stdlib.h>
char* countAndSay(int n);
void ContSay(shar *str1,char *str2);
int main(void){
    int n;
    scanf("%d",&n);
    char array[20000];
    array = countAndSay(n);
}
void ContSay(char *str1,char *str2){
    int count,i,j;
    j = i = 0;
    while (*(str1+i+1) != '\0'){
        if((*str1+i) == *(str1+i+1)){
            i++;
            count++;
        } else{
            *(str2+j++) = count +'0';
            *(str2+j++) = *(str1+i);
            i++;
            count = 1;
        }
    }
    *(str2 + j++) = count +'0';
    *(str2 + j++) = *(str1+i);
}
char* countAndSay(int n) {
    char *str1,*str2;
    int i;
    str1 = (char *)malloc(9999* sizeof(char));
    str2 = (char *)malloc(9999* sizeof(char));
    memset(str1,0,9999);
    memset(str2,0,9999);
    strcpy(str2,"1");
    for (i = 0;  i<n ; i++) {
        ContSay(str2,str1);
        strcpy(str2,str1);
    }
    return str2;
}
