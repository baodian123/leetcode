class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0, res = 0;
        char c = '(';
        
        for (const char &ch: s) {
            if (ch == '(')
                depth += 1;
            else {
                depth -= 1;
                if (c == '(')
                    res += 1 << depth;
            }
            
            c = ch;
        }
        
        return res;
    }
};