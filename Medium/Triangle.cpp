class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[triangle.size()][triangle[triangle.size()-1].size()];
        
        dp[0][0] = triangle[0][0];
        
        for (int i=1; i<triangle.size(); i++) {
            dp[i][0] = dp[i-1][0] + triangle[i][0];
        }
        
        for (int i=1; i<triangle.size(); i++) {
            for (int j=1; j<triangle[i].size(); j++) {
                if (j == triangle[i].size()-1) dp[i][j] = dp[i-1][j-1] + triangle[i][j];
                else dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            }
        }
        
        int rs = dp[triangle.size()-1][0];
        for (int i=1; i<triangle[triangle.size()-1].size(); i++)
            if (dp[triangle.size()-1][i] < rs) rs = dp[triangle.size()-1][i];
        
        return rs;
    }
};