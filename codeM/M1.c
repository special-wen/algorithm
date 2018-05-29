//
// Created by zxw on 18-5-28.
//

#include <stdio.h>

float eightCount(int arr[],int n);
float fullReduction(int arr[],int n,int array[],int k);
int main(void){
    int n,m;
    int arr[1000];
    int array[1000];
    scanf("%d %d",&n,&m);
    for (int i = 0;i<2*n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i = 0;i<2*m;i++){
        scanf("%d",&array[i]);
    }
    float aa = eightCount(arr,n);
    float bb = fullReduction(arr,n,array,m);
    float min;
    if (aa<bb){
        min = aa;
    } else{
        min = bb;
    }
    printf("%.2f",min);


}

float eightCount(int arr[],int n){
    float discount = 0.00;
    for (int i = 0;i<2*n;i++){
        if (arr[i+1] == 1){
            discount += arr[i]*0.8;
            i++;
        }else{
            discount += arr[i];
            i++;
        }
    }
//    printf("%.2f\n",discount);
    return  discount;
}

float fullReduction(int arr[],int n,int array[],int k){
    float sum = 0.00;
    float min = 0.00;
    for (int i = 0;i<n*2;i++){
        sum += arr[i];
        i++;
    }
    float fullSum = sum;
    for(int i = 0;i<k*2;i++){
        if (sum >= array[i]){
            min = sum - array[i+1];
            if (min < fullSum){
                fullSum = min;
            }
            i++;
        }else{
            i++;
        }
    }
//    printf("%.2f",fullSum);
    return fullSum;
}


