//
// Created by zxw on 17-12-26.
//
#include<stdio.h>
#include<stdlib.h>
int success;

int max(int s){
    int n = 0;
    int t = 0;
    while(t<s){
        t = t*2+1;
        n++;
    }
    return n;
}

void print(int arr[],int now){
    int i;
    for(i = 0;i<now;i++){
        printf("%d ",arr[i]);
    }
    puts("");
}

void do_sth(int arr[],int now,int t,int m,int type){

    //arr[]保存路径的数组
    //now 当前步数
    //t当前结果
    //m目标值
    //type 当前算法
    if(success == 1){
        return ;
    }
    if(t > m){
        return;
    }

    arr[now] = type;
    //printf("%d,%d,%d,%d\n",now,t,m,type);
    //print(arr,now+1);
    int new_t;
    if(type==0){
        new_t = t*2 + 1;

    }else{
        new_t = t*2 + 2;
    }
    if(new_t == m){
        success = 1;
        print(arr,now+1);
        return;
    }else{
        do_sth(arr,now+1,new_t,m,0);
        do_sth(arr,now+1,new_t,m,1);
    }
}

int main(void){
    success = 0;
    int n;
    int t;
    int *arr;
    while(scanf("%d",&n) != EOF){
        success = 0;
        t = max(n);
        //printf("t=%d\n",t);
        arr = malloc(sizeof(int)*t);
        do_sth(arr,0,0,n,0);
        do_sth(arr,0,0,n,1);
        free(arr);
    }
}