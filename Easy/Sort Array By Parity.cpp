class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = 0;
        
        while (i < nums.size()) {
            if (nums[i] % 2 == 0 && i != j) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j += 1;
            } else {
                i += 1;
            }
        }
        
        return nums;
    }
};