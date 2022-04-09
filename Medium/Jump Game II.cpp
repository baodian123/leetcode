class Solution {
public:
    int jump(vector<int>& nums) {
        int front = 0, last = 0, cnt = 0;
        
        while (last < nums.size() - 1) {
            int far = 0;
            for (int i=front; i<=last; i++) {
                far = max(far, nums[i] + i);
            }
            cnt += 1;
            front = last;
            last = far;
        }
        
        return cnt;
    }
};