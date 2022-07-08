//Given an array of integers nums, calculate the pivot index of this array.

//The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

//If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array

//Return the leftmost pivot index. If no such index exists, return -1.

int pivotIndex(int* nums, int numsSize){
    int * sum =(int *)malloc((numsSize+2)*sizeof(int));
    sum[0] = 0;
    for(int i=0; i<numsSize; i++)
        sum[i+1] = sum[i] + nums[i];
    sum[numsSize+1] = sum[numsSize];
    for(int i=1; i<numsSize+1; i++)
        if(sum[numsSize+1] - sum[i] == sum[i-1])
            return i-1;
    free(sum);
    return -1;
}
