/*************************************************************************
	> File Name: cow.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月23日 星期一 15时24分29秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int n;
    while(scanf("%d",&n) && n != 0){
        int s1,s2,s3;
        s1 = 1;
        s2 = 2;
        s3 = 3;

        if(n == 1){
            printf("1\n");
            continue;
        }
        if(n == 2){
            printf("2\n");
            continue;
        }
        if(n == 3){
            printf("3\n");
            continue;
        }
        int a,b,c;
        int i;
        int s;
        for(i = 4;i<=n;i++){
            s = s1 + s3;
            s1 = s2;
            s2 = s3;
            s3 = s;
        }
        printf("%d\n",s);
    }
}
