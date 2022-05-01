class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for (int i=0; i<words.size(); ++i) {
            bool x = true;
            
            for (int j=0; j<words[i].length() && x; ++j) {
                if (j >= s.length() || words[i][j] != s[j]) x = false;
            }
            
            if (x) count += 1;
        }
        
        return count;
    }
};