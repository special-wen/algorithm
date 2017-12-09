//
// Created by zxw on 17-12-9.
//
#include <stdio.h>
int isValid(char* s);
int main(void){
    char s[2000] = {'{','}','(',')','[',']'};
    int flag = isValid(s);
    if(flag == 1){
        printf("有效");
    }else{
        printf("无效");
    }
}
int isValid(char* s){
    int i = 0;
    int top = -1;
    char array[2000];
    while (s[i] != '\0'){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            top++;
            array[top] = s[i];
        }else{
            if(top == -1){
                return 0;
            }else{
                if((array[top] == '{' && s[i] == '}') || (array[top] == '(' && s[i] == ')') || (array[top] == '[' && s[i] == ']')){
                    top--;
                }else{
                    return 0;
                }
            }
        }
        i++;
    }
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}
