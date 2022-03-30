class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i=0; i<matrix.size(); i++) {
            if (target > matrix.at(i).at(matrix.at(i).size()-1)) continue;
            if (target < matrix.at(i).at(0)) return false;
            else {
                int left = 0, right = matrix.at(i).size() - 1;
                
                while (1) {
                    if (target == matrix.at(i).at(left) || target == matrix.at(i).at(left)) return true;
                    if (right - left <= 0) return false;
                    
                    int middle = (left + right) / 2;
                    
                    if (target == matrix.at(i).at(middle)) return true;
                    if (target > matrix.at(i).at(middle)) left = middle + 1;
                    else right = middle - 1;
                }
            }
        }
        
        return false;
    }
};