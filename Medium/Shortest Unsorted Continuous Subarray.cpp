class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int first = INT_MAX, last = INT_MIN;
        
        for (int i=1; i<nums.size(); ++i) {
            if (nums[i] < nums[i-1]) {
                int tf = i-1, tl = i, front = nums[i-1], rear = nums[i];
                while (tf >= 1 && nums[tf-1] > rear) tf -= 1;
                while (tl+1 < nums.size() && nums[tl+1] < front) tl += 1;
                
                if (first > tf) first = tf;
                if (last < tl) last = tl;
            }
        }
        
        if (first == INT_MAX) return 0;
        else return last - first + 1;
    }
};