class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        priority_queue<pair<int, int>> pq;
        vector<int> rs;
        
        for (int num : nums) um[num] += 1;
        for (auto item : um) {
            pair<int, int> p(item.second, item.first);
            pq.push(p);
        }
        
        while (k--) {
            rs.push_back(pq.top().second);
            pq.pop();
        }
        
        return rs;
    }
};