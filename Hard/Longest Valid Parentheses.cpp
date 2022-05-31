class Solution {
public:
    int longestValidParentheses(string s) {
        int l = 0, ml = 0;
        stack<int> st;
        st.push(-1);
        
        for (int i=0; i<s.length(); ++i) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if (!st.size()) {
                    st.push(i);
                } else {
                    l = i - st.top();
                    ml = max(ml, l);
                }
            }
        }
        
        return ml;
    }
};