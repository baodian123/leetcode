class Solution {
public:
    string convertToTitle(int columnNumber) {
        string rs = "";
        
        while (1) {
            if (columnNumber <= 26) {
                rs = (char)(columnNumber+64) + rs;
                break;
            }
            
            int val = columnNumber%26;
            if (val == 0) val = 26;
            rs = (char)(val+64) + rs;
            columnNumber = (columnNumber-val)/26;
        }
        
        return rs;
    }
};