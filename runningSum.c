//Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//Return the running sum of nums.

int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int currentSum = 0;
    for(int i = 0; i < numsSize;i++){
        currentSum+=nums[i];
        nums[i] = currentSum;
    }
    return nums;
}
