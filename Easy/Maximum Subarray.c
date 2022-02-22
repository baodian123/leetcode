int maxSubArray(int* nums, int numsSize){
    if (numsSize == 1) return nums[0];
    int i, j, max = nums[0];
        
    for (i=0; i<numsSize; i++) {
        int cur = nums[i];
        if (cur > max) max = cur;
        for (j=i+1; j<numsSize; j++) {
            int next = cur + nums[j];
            if (next > max) max = next;
            cur = next;
        }
    }
    
    return max;
}