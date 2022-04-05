class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, rs = -1;
        
        while (i < j) {
            rs = max(rs, min(height[i], height[j])*(j-i));
            
            if (height[i] < height[j])
                i += 1;
            else
                j -= 1;
        }
        
        return rs;
    }
};