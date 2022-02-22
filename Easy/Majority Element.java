class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        
        int major = 0;
        
        for (int i=0; i<nums.length; i++) {
            int j = map.get(nums[i]) != null ? map.get(nums[i])+1 : 1;
            map.put(nums[i], j);
            if (map.get(major) == null || j > map.get(major)) major = nums[i];
        }
        
        return major;
    }
}