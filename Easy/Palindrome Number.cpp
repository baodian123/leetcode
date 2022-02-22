class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int p[10];
        
        int temp = 0;
        while (x / 10 != 0){
            p[temp] = x % 10;
            x = x / 10;
            temp++;
        }
        p[temp] = x;
            
        for (int i = 0; i <= temp; i++){
            if (p[i] != p[temp - i]){
                return false;
            }
            if (i > (temp - i)){
                break;
            }
        }
        return true;
    }
};