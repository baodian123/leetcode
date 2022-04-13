class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        while (k--) {
            for (int i=0; i<grid.size(); i++) {
                int val = grid[i].back();
                grid[i].pop_back();

                if (i == grid.size()-1) grid[0].insert(grid[0].begin(), val);
                else grid[i+1].insert(grid[i+1].begin(), val);
            }
        }
    
        return grid;
    }
};