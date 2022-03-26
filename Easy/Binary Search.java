class Solution {
    public int search(int[] nums, int target) {
        return binarySearch(nums, target, 0, nums.length - 1);
    }
    
    public int binarySearch(int[] nums, int target, int left, int right) {
        if (nums[left] == target) return left;
        if (nums[right] == target) return right;
        
        if (right - left <= 1) return -1;
        
        int middle = (right + left) / 2;
        
        if (nums[middle] == target) return middle;
        
        return nums[middle] > target ? binarySearch(nums, target, left, middle) : binarySearch(nums, target, middle, right);
    }
}