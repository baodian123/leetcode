class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        
        long long int val = 0;
        for (int i=0; i<nums.size(); ++i)
            val += nums[i];
        
        vector<int> rs = {0};
        for (int i=0; i<nums.size(); ++i) {
            if (val-nums[i]-rs.back() == rs.back()) return i;
            else rs.push_back(rs.back()+nums[i]);
        }
        
        return -1;
    }
};