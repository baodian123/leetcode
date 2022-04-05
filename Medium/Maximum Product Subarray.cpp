class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int rs = nums[0], _max = nums[0], _min = nums[0];
        
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i] < 0) swap(_max, _min);
            
            _max = max(_max * nums[i], nums[i]);
            _min = min(_min * nums[i], nums[i]);
            
            rs = max(rs, _max);
        }
        
        return rs;
    }
};