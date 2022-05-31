class Solution {
public:
    int maxProduct(vector<string>& words) {
        int rs = 0;
        vector<int> bitmask(words.size());
        
        for (int i=0; i<words.size(); ++i) {
            for (char ch : words[i])
                bitmask[i] |= 1 << (ch - 'a');
            for (int j=0; j<i; ++j)
                if ((bitmask[i] & bitmask[j]) == 0) rs = max(rs, int(words[i].length() * words[j].length()));
        }    
        
        return rs;
    }
};