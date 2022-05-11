class Solution {
public:
    int countVowelStrings(int n) {
        int rs = 0;
        generate(1, n, rs);
        
        return rs;
    }
    
    void generate(int cur, int n, int& rs) {
        if (n == 0) {
            rs += 1;
            return ;
        }
        
        for (int i=cur; i<=5; ++i) {
            generate(i, n-1, rs);
        }
    }
};