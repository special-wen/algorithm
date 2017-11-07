/*************************************************************************
	> File Name: evenSum.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月22日 星期日 14时53分04秒
 ************************************************************************/

#include<stdio.h>
int main(void){
    int a,b;
    int temp,n;
    int sum;
    int i,j,k;
    int arg[100],array[101],argv[100];
    while(EOF != scanf("%d %d",&a,&b)){
        if(b == 0)
            b = a;
        sum = j  = 0;
        temp = a/b;
        n = a % b;
        //printf("%d %d \n",n,temp);
        for(i = 0;i< a;i++){
            array[i] = 2*(i+1);
        }
        //    printf("-------------\n");
        for(i = 0;i < temp;i++){
            k = array[i*b];
            sum = 0;
            for(j = 0;j<b;j++){
                arg[j] = 2*j+k;
                sum = sum + arg[j];
            }
            argv[i] = sum /b;
           // printf("%d %d \n",k,sum);
            //PRINtf("---------\n");
        }
        if(n>0){
            sum = 0;
            for(i = 0;i < n; i++){ 
                arg[i] = 2*i+array[b*temp];
                sum = sum + arg[i];
                //printf("%d %d %d %d\n",i,arg[i],n,sum);
            }
            argv[temp] = sum / n;
            //printf("%d\n",argv[temp]);
        }
        if(n == 0){
            for(i = 0;i < temp-1;i++){
                printf("%d ",argv[i]);
            }
            printf("%d\n",argv[temp-1]);
        }else{
            for(i = 0;i<temp;i++){
                printf("%d ",argv[i]);
            }
            printf("%d\n",argv[temp]);
        }
    }
}
