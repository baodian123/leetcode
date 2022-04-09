class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return vector<vector<int>>();
        sort(nums.begin(), nums.end());
        return ksum(nums, 0, 4, target);
    }

    vector<vector<int>> ksum(vector<int>& nums, int start, int k, int target) {
        vector<vector<int>> rs;

        if (k == 2) {
            int l = start, r = nums.size() - 1;
            while (l < r) {
                if (nums[l] + nums[r] == target) {
                    vector<int> temp{nums[l], nums[r]};
                    rs.push_back(temp);
                    while (l < nums.size()-1 && nums[++l] == nums[l-1]);
                    while (r > 0 && nums[--r] == nums[r+1]);
                } else if (nums[l] + nums[r] < target) {
                    while (l < nums.size()-1 && nums[++l] == nums[l-1]);
                } else {
                    while (r > 0 && nums[--r] == nums[r+1]);
                }
            }
            return rs;
        } else {
            for (int i=start; i<nums.size()-k+1; ++i) {
                if (i == start || nums[i] != nums[i-1]) {
                    vector<vector<int>> k1sum = ksum(nums, i+1, k-1, target-nums[i]);
                    for (int j=0; j<k1sum.size(); ++j) {
                        k1sum[j].insert(k1sum[j].begin(), nums[i]);
                        rs.push_back(k1sum[j]);
                    }
                }
            }

            return rs;
        }
    }
};