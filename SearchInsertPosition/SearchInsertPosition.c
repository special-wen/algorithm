//
// Created by zxw on 18-1-2.
//
#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target);
int main(void){
    int nums[2000] = {1,3,5,6};
    int numsSize = 4;
    int target = 5;
    int index = searchInsert(nums,numsSize,target);
    printf("%d",index);
}

int searchInsert(int* nums, int numsSize, int target) {
    int index;
    for(int i = 0;i<numsSize;i++){
        if (target == nums[i]){
            index = i;
        }
        if(target >= nums[i] && target <= nums[i+1]){
            index = i+1;
        }
        if(target < nums[0]){
            index = 0;
        }
        if(target > nums[numsSize-1]){
            index = numsSize;
        }
    }
    return index;
}
