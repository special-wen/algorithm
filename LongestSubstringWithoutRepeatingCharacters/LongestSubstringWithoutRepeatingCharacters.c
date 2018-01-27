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
}

int lengthOfLongestSubstring(char* s) {
    int s_length = strlen(s);
    int temp = 0;
    int array[2000];
    array[0] = s[0];
    for (int i = 0; i < s_length-1; i++) {

    }
}