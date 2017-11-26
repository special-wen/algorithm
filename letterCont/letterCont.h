//
// Created by zxw on 17-11-26.
//

#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    char cc = getchar();
//    printf("%c\n",cc);
    int i = 0;
    for(i = 0;i<n;i++){
        int count = 0;
        char c;
        while((c = getchar()) != '\n'){
            if(c<0){
                count = count + 1;
            }
        }
        printf("%d\n",count/2);
    }
}
