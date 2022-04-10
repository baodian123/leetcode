class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        int max = num;
        
        for (int i=0; i<s.length(); ++i) {
            int index = i;
            if ((s[i]-'0')%2==0) {
                for (int j=i+1; j<s.length(); ++j) {
                    if ((s[j]-'0')%2==0 && s[j]-'0' > s[index]-'0') {
                        index = j;
                    }
                }
                char c = s[i];
                s[i] = s[index];
                s[index] = c;
            } else {
                for (int j=i+1; j<s.length(); ++j) {
                    if ((s[j]-'0')%2==1 && s[j]-'0' > s[index]-'0') {
                        index = j;
                    }
                }
                char c = s[i];
                s[i] = s[index];
                s[index] = c;
            }
            if (stoi(s) > max) max = stoi(s);
        }
        
        return max;
    }
};