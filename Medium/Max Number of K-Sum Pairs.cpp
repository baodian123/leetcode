class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        
        for (int i=0, j=nums.size()-1; i<j; ) {
            if (nums[i] + nums[j] == k) {
                i += 1;
                j -= 1;
                cnt += 1;
            } else if (nums[i] + nums[j] < k) {
                i += 1;
            } else {
                j -= 1;
            }
        }
        
        return cnt;
    }
};