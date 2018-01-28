//
// Created by zxw on 18-1-27.
//

#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char* s);
int main(void){
    char s[2000] = {"abcabcbb"};
    int length;
    length = lengthOfLongestSubstring(s);
    printf("%d",length);
}

int lengthOfLongestSubstring(char* s) {
    int max = 0;
    char *fc;
    int i = 0;
    while (*s != '\0'){
        if(i == 0){
            fc = s;
            i++;
        } else{
            int flag = 0;
            int cont = 1;
            char *t = fc;
            while (t != s){
                if (*t == *s){
                    flag = 1;
                    break;
                }
                cont++;
                t++;
            }
            if (flag == 1){
                t++;
                fc = t;
                i = i-cont+1;
            } else{
                i++;
            }
        }
        if (i>max){
            max = i;
        }
        s++;
    }
    return max;
}