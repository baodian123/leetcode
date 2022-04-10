class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        const unsigned int m = 1e9+7;
        
        while (k--) {
            int num = pq.top();
            pq.pop();
            pq.push(num+1);
        }
        
        long long rs = 1;
        while (pq.size()) {
            rs *= pq.top();
            rs = rs % m;
            pq.pop();
        }
        
        return rs;
    }
};