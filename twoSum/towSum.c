//
// Created by zxw on 17-12-5.
//
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* num,int numsSize,int target);
int main(void){
    int nums[4] = {2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int NUMS[numsSize];
    int *a = twoSum(nums,numsSize,target);
    printf("%d + %d = %d",nums[a[0]],nums[a[1]],target);
}

int* twoSum (int* nums,int numsSize,int target){
    int *a;
    int sum;
    a = malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize; i++) {
        for(int j = i+1;j<numsSize;j++){
            sum = nums[i] +nums[j];
            if(sum == target){
                a[0] = i;
                a[1] = j;
            }
        }
    }
    return a;
}