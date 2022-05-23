class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        for (string s : strs) {
            int x = 0, y = 0;
            for (int i=0; i<s.length(); ++i) {
                if (s[i] == '1') x += 1;
                else y += 1;
            }
            
            for (int i=m; i>=y; --i) {
                for (int j=n; j>=x; --j) {
                    dp[i][j] = max(dp[i][j], 1+dp[i-y][j-x]);
                }
            }
        }
        
        return dp[m][n];
    }
};