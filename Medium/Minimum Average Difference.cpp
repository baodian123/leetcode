class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long int> cur = {nums[0]};
        long long int total = 0;
        for (int i=0; i<nums.size(); ++i) total += nums[i];
        
        if (nums.size() == 1) return 0;
        
        long long int idx = 0, m = labs(cur.back()-(total-cur.back())/(nums.size()-1));
        
        for (int i=1; i<nums.size(); ++i) {
            cur.push_back(nums[i]+cur.back());
            int temp;
            if (nums.size()-i-1) {
                temp = labs(cur.back()/(i+1)-((total-cur.back())/(nums.size()-i-1)));
            } else {
                temp = cur.back()/(i+1);
            }
            
            if (temp < m) {
                m = temp;
                idx = i;
            }
        }
        return idx;
    }
};