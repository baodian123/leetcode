class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> row(9, false);
        vector<bool> col(81, false);
        vector<bool> mat(27, false);
        
        for (int i=0; i<9; ++i) {
            if (i != 0 && i % 3 == 0) fill(mat.begin(), mat.end(), false);
            for (int j=0; j<9; ++j) {
                if (board[i][j] != '.') {
                    if (row[board[i][j]-'0'-1] == true || mat[board[i][j]-'0'-1+j/3*9] == true || col[board[i][j]-'0'-1+j*9] == true) {
                        return false;
                    } else {
                        row[board[i][j]-'0'-1] = true;
                        col[board[i][j]-'0'-1+j*9] = true;
                        mat[board[i][j]-'0'-1+j/3*9] = true;
                    }
                }
            }
            fill(row.begin(), row.end(), false);
        }
        
        return true;
    }
};