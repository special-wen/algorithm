//
// Created by zxw on 17-12-7.
//
#include <stdio.h>
int reverse(int x);
int main(void){
    int n;
    scanf("%d",&n);
    int y;
    y = reverse(n);
    printf("%d",y);
}
int reverse(int x) {
    int i = 0;
    int tag,temp;
    double num[200];
    double y=0;
    if(x<0){
        x = x*(-1);
        tag = 0;
    }else{
        tag = 1;
    }
    do{
        num[i] = x%10;
        x = x/10;
        i++;
    }while(x!=0);
    y =0;
    for(int j = 0;j<i;j++){
        if(y*10+num[j]>=2147483647)

            return 0;
        y = y*10+num[j];


    }
    if(tag==0)
        y = y*(-1);
    return y;

}