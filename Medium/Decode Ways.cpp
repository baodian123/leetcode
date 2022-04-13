class Solution {
public:
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        if (s.length() == 1) return 1;
        
        int dp[s.length()+1];
        
        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;
        
        for (int i=1; i<s.length(); i++) {
            dp[i+1] = 0;
            if (s[i] - '0' >= 1 && s[i] - '0' <= 9)
                dp[i+1] += dp[i];
            if ((s[i-1] - '0')*10+(s[i] - '0') >= 10 && (s[i-1] - '0')*10+(s[i] - '0') <= 26)
                dp[i+1] += dp[i-1];
        }
        
        return dp[s.length()];
    }
};