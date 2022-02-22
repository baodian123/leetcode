int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    
    int i = 0;
    int rs = 1;
    int top = 1;
    
    for (i=1; i<numsSize; i++) {
        if (nums[i] != nums[i-1]) {
            nums[top++] = nums[i];
            rs += 1;
        }
    }
    
    return rs;
}