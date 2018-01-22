//
// Created by zxw on 18-1-22.
//

#include <stdio.h>
#include <string.h>
int lengthOfLastWord(char* s);
int main(void){
    char array[2000] = {"a"};
    int length = lengthOfLastWord(array);
    printf("%d",length);
}
int lengthOfLastWord(char* s){
    int len = strlen(s);
    int length = len;
    int temp = 0;
    int flag = 0;
//    printf("长度是：%d",len);
    while (len>=0){
        if (s[len-1] ==' '){
            temp++;
        } else{
            break;
        }
        len--;
    }
    length = length - temp;
//    printf("去掉空格的长度是: %d",length);
    for(int i = length-1;i>=0;i--){
        if(s[i] != ' '){
            flag++;
        } else{
            break;
        }
    }
    return flag;
}
