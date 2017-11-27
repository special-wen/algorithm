//
// Created by zxw on 17-11-26.
//
#include <stdio.h>
int main(void){
    char ch[1000];
    int n;
    scanf("%d",&n);
    getchar();
    int i,cont;
    for(i = 0;i<n;i++){
        char c;
        cont = 0;
        int j;
        while (c =getchar()){
            if(c == '\n'){
                for(j = cont-1;j>=0;j--){
                    //倒序输出
                    putchar(ch[j]);
                }
                puts("");
                break;
            }else if(c == ' '){
                for(j = cont-1;j>=0;j--){
                    putchar(ch[j]);
                    }
                putchar(' ');
                cont = 0;
            }
            else{
                ch[cont] = c;
                cont++;
            }
        }
    }
}