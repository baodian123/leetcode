class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> rs;
        sort(nums.begin(), nums.end());
        
        do {
            rs.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        return rs;
    }
};