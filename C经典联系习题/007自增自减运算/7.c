//
// Created by zxw on 17-12-4.
//

#include <stdio.h>
int main(void){
    int a = 5,b,c,i=10;
    b = a++;
    c = ++b;
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    printf("i,i++,i++ = %d,%d,%d\n",i,i++,i++);
    printf("%d\n",++i);
    printf("%d\n",--i);
    printf("%d\n",i--);
    printf("%d\n",i++);
    printf("%d\n",-i++);
    printf("%d\n",-i--);
    getchar();
}