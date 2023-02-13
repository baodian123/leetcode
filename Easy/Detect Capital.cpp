class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() <= 1) return true;

        bool outer = word.at(1) >= 65 && word.at(1) <= 90;

        for (int i = 2; i < word.length(); ++i) {
            bool inner = word.at(i) >= 65 && word.at(i) <= 90;

            if (outer != inner) return false;
        }
        
        if (outer) {
            if (word.at(0) < 65 || word.at(0) > 90) return false;
        }

        return true;
    }
};