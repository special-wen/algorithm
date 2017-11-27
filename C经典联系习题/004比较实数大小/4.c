//
// Created by zxw on 17-11-27.
//

#include <stdio.h>
int main(void){
    float x,y,c;
    printf("please input x and y:");
    scanf("%f%f",&x,&y);
    c = x>y?x:y;
    printf("MAX of (%f %f) is %f",x,y,c);
}