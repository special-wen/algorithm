//
// Created by zxw on 17-11-28.
//

#include <stdio.h>
int main(void){
    char ch,nch;
    int cont;
    int k;
    printf("Please input a string a # in the end.");
    scanf("%c",ch);
    while (ch != '#'){
        if(ch>= '0' && ch<= '9'){
            cont = ch - '0'+1;
            scanf("%c",&nch);
            for(k = 0;k<cont;k++){
                printf("%c",nch);
            }
        } else
            printf("%c",ch);
        printf(" ");
        scanf("%c",&ch);
    }
    printf("#\n");
}