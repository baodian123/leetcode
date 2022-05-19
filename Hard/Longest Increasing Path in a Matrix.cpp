class Solution {
public:
    vector<vector<int>> paths = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        int rs = 1;
        for (int i=0; i<matrix.size(); ++i) {
            for (int j=0; j<matrix[0].size(); ++j) {
                int temp = dfs(matrix, i, j, matrix.size(), matrix[0].size(), dp);
                rs = max(rs, temp);
            }
        }
        
        return rs;
    }
    
    int dfs(vector<vector<int>>& matrix, int i, int j, int row, int col, vector<vector<int>>& dp) {
        if (dp[i][j] != 0) return dp[i][j];
        
        int rs = 1;
        for (vector<int> path : paths) {
            int x = path[0] + i, y = path[1] + j;
            if (x < 0 || x >= row || y < 0 || y >= col || matrix[x][y] <= matrix[i][j]) continue;
            int temp = 1 + dfs(matrix, x, y, row, col, dp);
            rs = max(rs, temp);
        }
        
        dp[i][j] = rs;
        return rs;
    }
};