class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> cur;
        vector<vector<int>> rs;
        sort(candidates.begin(), candidates.end());
        generate(candidates, rs, cur, target, 0);
        
        return rs;
    }
    
    void generate(vector<int>& candidates, vector<vector<int>>& rs, vector<int>& cur, int target, int idx) {
        if (target == 0) {
            rs.push_back(cur);
            return ;
        }
        
        while (idx < candidates.size() && target - candidates[idx] >= 0) {
            cur.push_back(candidates[idx]);
            generate(candidates, rs, cur, target - candidates[idx], idx);
            idx += 1;
            cur.pop_back();
        }
    }
};