class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> is(26, 0);
        
        for (char c : sentence)
            is[c-97] = 1;
        
        for (int i : is)
            if (!i) return false;
        
        return true;
    }
};