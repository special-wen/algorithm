//
// Created by zxw on 18-1-9.
//
#include <stdio.h>
int maxSubArray(int* nums, int numsSize);
int main(void){
    int nums[2000] = {-2,-1,-3,4,-1,2,1,-5,4};
    int numsSize = 9;
    int sum = maxSubArray(nums,numsSize);
    printf("%d",sum);
}
int maxSubArray(int* nums, int numsSize) {
    int i;
    int sum = 0;
    int max = nums[0];
    for (i = 0;  i<numsSize ; i++) {
        sum = 0;
        for(int j = i;j<numsSize;j++){
            sum = sum + nums[j];
            if(max < sum)
                max = sum;
        }
    }
    return max;
}