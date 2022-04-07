class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> rs;
        
        for (int i=0; i<stones.size(); ++i)
            rs.push(stones[i]);
        
        while (rs.size() > 1) {
            int x = rs.top();
            rs.pop();
            int y = rs.top();
            rs.pop();
            
            if (x != y)
                rs.push(x-y);
        }
        
        if (!rs.size()) return 0;
        
        return rs.top();
    }
};