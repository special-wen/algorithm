//
// Created by zxw on 17-12-7.
//
#include <stdio.h>
#define I 1;
#define V 5;
#define X 10;
#define L 50;
#define C 100;
#define D 500;
#define M 1000;
int romanToInt(char* s);
int main(void){
    char s[200] = {'X','C','I','X'};
    int sum = romanToInt(s);
    printf("%d",sum);
}
int romanToInt(char* s){
    int i = 0;
    int sum = 0;
    int size,temp,flag;
    while (s[i] != '\0'){
        i++;
    }
    size = i;
    for(i = 0;i<size;i++){
        switch (s[i]){
            case 'I':temp = 1;
                break;
            case 'V':temp = 5;
                break;
            case 'X':temp = 10;
                break;
            case 'L':temp = 50;
                break;
            case 'C':temp = 100;
                break;
            case 'D':temp = 500;
                break;
            case 'M':temp = 1000;
                break;
        }
        switch (s[i+1]){
            case 'I':flag = 1;
                break;
            case 'V':flag = 5;
                break;
            case 'X':flag = 10;
                break;
            case 'L':flag = 50;
                break;
            case 'C':flag = 100;
                break;
            case 'D':flag = 500;
                break;
            case 'M':flag = 1000;
                break;
        }
        if(i==size-1 || flag<=temp){
            sum += temp;
        }else{
            sum -= temp;
        }
    }
    return sum;
}
