class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> rs;
        for (int i=0, j=numbers.size()-1; i<j; ) {
            if (numbers[i] + numbers[j] < target) i += 1;
            else if (numbers[i] + numbers[j] > target) j -= 1;
            else {
                rs.push_back(i+1);
                rs.push_back(j+1);
                return rs;
            }
        }
        
        return vector<int>();
    }
};