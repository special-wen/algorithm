/*************************************************************************
	> File Name: aPlusb.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月15日 星期日 20时11分47秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define LEN 6
int main(void){
    char src[LEN];
    printf("please enter:\n");
    fgets(src,LEN,stdin);
    printf("your enter is:\n");
    fputs(src,stdout);
    
}
