class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int rs = nums[0];
        
        for (int i=1; i<nums.size(); ++i) {
            if (abs(nums[i]) < abs(rs)) rs = nums[i];
            if (abs(nums[i]) == abs(rs)) rs = nums[i] > rs ? nums[i] : rs;
            if (abs(nums[i]) > abs(rs)) break;
        }
        
        return rs;
    }
};