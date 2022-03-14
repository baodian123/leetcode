class Solution {
    public boolean canJump(int[] nums) {
        int jump = nums[0];
        
        for (int i=1; i<nums.length; i++) {
            if (jump <= 0) return false;
            jump--;
            if (nums[i] > jump) jump = nums[i];
        }
        
        return true;
    }
}