//
// Created by zxw on 18-6-9.
//
#include <stdio.h>
#include <string.h>
int abs(int a);
int main(void){
    int t;
    scanf("%d",&t);
    char array[t][100001] ;
    for (int i = 0;i<t;i++){
        scanf("%s",array[i]);
    }
    int x[26] = {0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2};
    int y[26] = {1,1,1,2,2,2,0,0,0,1,1,1,2,2,2,0,0,0,0,1,1,1,2,2,2,2};

    for (int i = 0;i<t;i++){
        int len = strlen(array[i]);
        int temp = 0;
        for(int j = 0;j<len;j++){
            char a = array[i][j];
            int b = (int)a-65;
            if (j == 0){
                temp = abs(x[b]-0)+abs(y[b]-0);
            } else{
                char c = array[i][j-1];
                int d = (int)c -65;
                temp+=abs(x[b]-x[d])+abs(y[b]-y[d]);
            }
        }
        printf("%d\n",temp);
    }

}
int abs(int a){
    if (a >=0){
        return a;
    } else{
        return -1*a;
    }
}