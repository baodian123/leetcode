class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int rs = target;
        int ln = nums.length;
        int diff = Integer.MAX_VALUE;
        for (int i = 0; i < ln; i++) {
            int left = i + 1;
            int right = ln - 1;
            
            while (left < right && left < ln) {
                int temp = nums[i] + nums[left] + nums[right];
                int tdiff = temp - target;
                if ( tdiff == 0 ) return target;
                
                int rdiff = Math.abs(tdiff);
                if ( rdiff < diff) {
                    diff = rdiff;
                    rs = temp;
                }
                if (tdiff < 0) {
                    left += 1;
                }
                else {
                    right -= 1;
                }
                
            }
        }
        
        return rs;
    }
}