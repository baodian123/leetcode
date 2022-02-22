int removeElement(int* nums, int numsSize, int val){
    int i, j, count = 0, flag = true;
    for (i=0; i<numsSize; i++) {
        if (nums[i] != val) continue;
        count++;
        flag = true;
        for (j=numsSize-1; j>=0 && flag; j--) {
            if (nums[j] == val) continue;
            if (j < i) return i;
            else {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                flag = false;
            }
        }
    }
    
    return numsSize - count;
}