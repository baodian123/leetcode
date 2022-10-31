class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> temp(nums.size(), -1);
        vector<int> rs;
        int sum = 0;
        
        for (int i=0; i<nums.size(); ++i) {
            if (temp[nums[i]-1] != -1) rs.push_back(nums[i]);
            else {
                temp[nums[i]-1] = 0;
                sum += nums[i];
            }
        }
        
        rs.push_back((1+nums.size())*nums.size()/2-sum);
        return rs;
    }
};