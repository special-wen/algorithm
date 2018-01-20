//
// Created by zxw on 17-12-22.
//
#include <stdio.h>
int strStr(char* haystack, char* needle);
int main(void){
    char haystack[200]={"hello"};
    char needle[200]={"ll"};
    int flag;
    flag = strStr(haystack,needle);
    printf("%d",flag);
}

int strStr(char* haystack,char* needle){
    int i=0;
    int j = 1;
    int flag,res,temp;
    if (!needle[0]){
        return 0;
    }
    while (haystack[i]){
        flag=0;
        j=1;
        if (needle[0] == haystack[i]){
            res = i;
            temp = i+1;
            while (needle[j]){
                if (needle[j] && !haystack[temp])
                    return -1;
                if (needle[j] == haystack[temp]){
                    temp++;
                    j++;
                } else{
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                return res;
            }
        }
        i++;
    }
    return -1;
}
