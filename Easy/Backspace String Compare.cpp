class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> _s, _t;
        
        for (int i=0; i<s.length(); ++i) {
            if (s[i] == '#') {
                if (_s.size()) {
                    _s.pop_back();
                }
            } else _s.push_back(s[i]);
        }
        
        for (int i=0; i<t.length(); ++i) {
            if (t[i] == '#') {
                if (_t.size()) {
                    _t.pop_back();
                }
            } else _t.push_back(t[i]);
        }
            
        if (_s.size() != _t.size()) return false;
        
        bool rs = true;
        
        for (int i=0; i<_s.size() && rs; ++i)
            if (_s[i] != _t[i]) rs = false;
        
        return rs;
    }
};