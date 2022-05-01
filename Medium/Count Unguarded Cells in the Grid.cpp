class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int rs[m][n], c = 0;
        
        for (int i=0; i<m; ++i)
            for (int j=0; j<n; ++j)
                rs[i][j] = 0;
        for (int i=0; i<guards.size(); ++i)
            rs[guards[i][0]][guards[i][1]] = -2;
        for (int i=0; i<walls.size(); ++i)
            rs[walls[i][0]][walls[i][1]] = 1;
        for (int i=0; i<guards.size(); ++i) {
            for (int left=guards[i][0]-1; left>=0; --left) {
                if (rs[left][guards[i][1]] == 1 || rs[left][guards[i][1]] == -2) break;
                else {
                    rs[left][guards[i][1]] = -1;
                }
            }
            for (int right=guards[i][0]+1; right<m; ++right) {
                if (rs[right][guards[i][1]] == 1 || rs[right][guards[i][1]] == -2) break;
                else {
                    rs[right][guards[i][1]] = -1;
                }
            }
            for (int top=guards[i][1]-1; top>=0; --top) {
                if (rs[guards[i][0]][top] == 1 || rs[guards[i][0]][top] == -2) break;
                else {
                    rs[guards[i][0]][top] = -1;
                }
            }
            for (int bottom=guards[i][1]+1; bottom<n; ++bottom) {
                if (rs[guards[i][0]][bottom] == 1 || rs[guards[i][0]][bottom] == -2) break;
                else {
                    rs[guards[i][0]][bottom] = -1;
                }
            }
        }
            
        for (int i=0; i<m; ++i)
            for (int j=0; j<n; ++j)
                if (rs[i][j] != -1 && rs[i][j] != -2)
                    c += 1;
        return c-walls.size();
    }
};