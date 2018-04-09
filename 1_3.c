#include<stdio.h>
#include<math.h>
int main(void){
    int l,r;
    scanf("%d %d",














          &l,&r);
    int i;
    int ret = 0;
    int start = 0;
    for(i = 1;i<=r;i++){
        start += i;
        if(start % 3 == 0){
            start = 0;
            if(i >= l){
                ret ++;
            }
        }else{
            start = start * pow(10,(i/10)+1);
        }
    }
    printf("%d",ret);
}