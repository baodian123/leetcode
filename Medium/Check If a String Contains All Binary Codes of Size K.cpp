class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.length() < k) return false;
        
        unordered_set<string> us;
        for (int i=0; i<=s.length()-k; ++i)
            us.insert(s.substr(i, k));
        
        return us.size() == pow(2, k);
    }
};