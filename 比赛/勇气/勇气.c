//
// Created by zxw on 17-12-23.
//

#include <stdio.h>
//int main(void){
//}
int NButton(int n);
int GButton(int n);
int main(void){
    int n;
    scanf("%d",&n);
    printf("NGNG");
    int x = 0;
    int temp;
    temp = NButton(x);

}

int NButton(int n){
    int courage;
    courage = 2*n+1;
    return courage;
}

int MButton(int n){
    int courage;
    courage = 2*n+2;
    return courage;
}