//
// Created by zxw on 17-12-7.
//
#include <stdio.h>
#include <limits.h>
int isPalindrome(int x);
int main(void){
    int x;
    scanf("%d",&x);
    int tag = isPalindrome(x);
    if(tag == 1){
        printf("是回文数");
    }

}
int isPalindrome(int x){
    int flag=1;
    int temp = x;
    long result;
    if(x<0){
        return 0;
    }
    while (x!=0){
        result = result*10+x%10;
        x = x/10;
        if(result>INT_MAX ||result<INT_MIN){
            return 0;
        }
    }

    if(result == temp){
        return 1;
    }else{
        return 0;
    }
}