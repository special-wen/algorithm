/*************************************************************************
	> File Name: a.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月18日 星期三 20时32分55秒
 ************************************************************************/

#include<stdio.h>
void add(int a[2])
{
    printf("sizeof = %d\n",sizeof(a));
    int i = 0;
    for(;i<3;i++){
        a[i] = 1;
    }

}
int main(void){
    int a[3] = {0,0,0};
    add(a);
    printf("sizeof = %d\n",sizeof(&a[0]));
    int i = 0;
    for(i;i<3;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
