int searchInsert(int* nums, int numsSize, int target){
    int i = -1, j;
    
    for (j=0; j<numsSize; j++) {
        if (nums[j] >= target) return j;
    }
    
    if (i == -1) return numsSize;
    else return -1;
}