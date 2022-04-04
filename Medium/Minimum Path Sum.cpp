class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int dp[grid.size()][grid.at(0).size()];
        
        dp[0][0] = grid.at(0).at(0);
        
        for (int i=1; i<grid.size(); i++)
            dp[i][0] = dp[i-1][0] + grid.at(i).at(0);
            
        for (int j=1; j<grid.at(0).size(); j++)
            dp[0][j] = dp[0][j-1] + grid.at(0).at(j);
        
        for (int i=1; i<grid.size(); i++)
            for (int j=1; j<grid.at(0).size(); j++)
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid.at(i).at(j);
        
        return dp[grid.size()-1][grid.at(0).size()-1];
    }
};