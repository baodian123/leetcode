class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> rs;
        generate(rs, vector<int>(), n, k, 0);
        
        return rs;
    }
    
    void generate(vector<vector<int>>& rs, vector<int> temp, int n, int k, int cur) {
        if (k == 0) {
            rs.push_back(temp);
            return ;
        }
        
        for (int i=cur+1; i<=n; ++i) {
            if (n-i-k+1 >= 0) {
                temp.push_back(i);
                generate(rs, temp, n, k-1, i);
                temp.pop_back();
            }
        }
    }
};