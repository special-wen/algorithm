//
// Created by zxw on 18-6-9.
//
#include <stdio.h>

int main(void){
    long long n;
    scanf("%lld",&n);
    long long arrayA[n];
    long long arrayB[n];
    for (int i = 0;i<n;i++){
        scanf("%lld",&arrayA[i]);
    }

    for (int i = 0; i <n ; i++) {
        scanf("%lld",&arrayB[i]);
    }

    long long count = 0;
    long list = 0;
    for (long long i = 0;i<n;i++){
        if (arrayB[i] != 0 && arrayA[i]<arrayB[i]){
            long long flag = 0;
            for (long long j = list;j<n;j++){
                if (arrayA[j]!=0 && arrayB[j]<arrayA[j]){
                    long long min;
                    long long num;
                    if (arrayA[j] < arrayB[i]){
                        min = arrayA[j];
                    } else{
                        min = arrayB[i];
                    }
//                    num = abs(arrayA[j]-arrayB[i]);
                    if (j == i){
                        count += 0;
                        continue;
                    }
                    if (i<j){
                        count += (j-i)*min;
                        flag = 1;
                    }
                    if (i>j){
                        count += (j+i)*min;
                        flag = 1;
                    }

                    arrayA[i] += min;
                    arrayA[j] -= min;
                    list = j;
                    break;
                }
            }
            if (flag == 1 ){
                i--;
            }
        }

    }
    printf("%lld\n",count);
}