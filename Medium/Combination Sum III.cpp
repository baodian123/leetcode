class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> rs;
        generate(vector<int>(), rs, k, n, 0);
        
        return rs;
    }
    
    void generate(vector<int> temp, vector<vector<int>>& rs, int k, int n, int cur) {
        if (k == 0 && n == 0) {
            rs.push_back(temp);
            return ;
        }
        if (k <= 0 || n <= 0) return ;
        
        for (int num=cur+1; num<=9; ++num) {
            if (n-num >= 0) {
                temp.push_back(num);
                generate(temp, rs, k-1, n-num, num);
                temp.pop_back();
            } else {
                break;
            }
        }
    }
};