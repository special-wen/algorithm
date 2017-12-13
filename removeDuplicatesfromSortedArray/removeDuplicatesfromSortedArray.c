//
// Created by zxw on 17-12-13.
//
#include <stdio.h>
int removeDuplicates(int* nums, int numsSize);
int main(void){
    int nums[3]={1,1,2};
    int numsSize = 3;
    removeDuplicates(nums,numsSize);
}

int removeDuplicates(int* nums, int numsSize){
    int newSize = 0;
    if(numsSize<2){
        return numsSize;
    } else{
        for(int i = 1;i<numsSize;i++){
            if(nums[i] != nums[i-1]){
                nums[newSize++] = nums[i];
            }
        }
        return newSize;
    }
}