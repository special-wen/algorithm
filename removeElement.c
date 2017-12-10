//
// Created by zxw on 17-12-10.
//
#include <stdio.h>
int removeElement(int* nums,int numsSize,int val);

int main(void){
    int nums[200] = {3,2,2,3};
    int numsSize = 4;
    int val = 3;
    removeElement(nums,numsSize,val);
}

int removeElement(int* nums,int numsSize,int val){
    int front = 0;
    int tail = numsSize-1;
    while (front <= tail){
        if(nums[front] == val && nums[tail] != val){
            nums[front] = nums[tail];
            nums[tail] = val;
        }
        if(nums[front] != val){
            front++;
        }
        if(nums[tail] == val){
            tail--;
        }
    }
    return tail+1;
}