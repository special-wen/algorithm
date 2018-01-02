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
    for(int i = 0;i<numsSize;i++){
        if (target == nums[i]){
            return i;
        }
        if(target >= nums[i] && target <= nums[i+1]){
            return i+1;
        }
    }
}
