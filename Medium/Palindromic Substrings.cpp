class Solution {
public:
    int countSubstrings(string s) {
        if (!s.length()) return 0;
        
        int rs = 0;
        for (int i=0; i<s.length(); ++i) {
            cnt(s, i, i, rs);
            cnt(s, i, i+1, rs);
        }
        
        return rs;
    }
    
    void cnt(string s, int left, int right, int& rs) {
        while (left >=0 && right < s.length() && s[left] == s[right]) {
            rs += 1;
            left -= 1;
            right += 1;
        }
    }
};