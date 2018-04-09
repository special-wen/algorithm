//
// Created by zxw on 18-4-5.
//
#include <stdio.h>
int main(void){
    int n,m;
    scanf("%d %d",&n,&m);
    char a[n][m];
    int i,j;
    for(i = 0;i<n;i++){
        scanf("%s",a[i]);
    }
    int max = 0;
    // int x = 0,y = 0;
    for(j = 0;j<m;j++){
        int x = 0,y = j;
        while(x<m && x>=0 && y<n && y>=0){
            if(a[x][y] == 'B' || a[x][y] == 'G'){
                max ++;
                break;
            }
            x-=1;
            y+=1;
        }
        x = 0;
        y = j;
        while(x<m && x>=0 && y<n && y>=0){
            if(a[x][y] == 'Y' || a[x][y] == 'G'){
                max ++;
                break;
            }
            x+=1;
            y+=1;
        }
    }
    for(i = 1;i<n;i++){
        int x = i,y = 0;
        while(x<m && x>=0 && y<n && y>=0){
            if(a[x][y] == 'Y' || a[x][y] == 'G'){
                max ++;
                break;
            }
            x+=1;
            y+=1;
        }
    }
    for(i = 0;i<n;i++){
        int x = m-1,y = j;
        while(x<m && x>=0 && y<n && y>=0){
            if(a[x][y] == 'B' || a[x][y] == 'G'){
                max ++;
                break;
            }
            x-=1;
            y+=1;
        }
    }

    printf("%d",max);
}

