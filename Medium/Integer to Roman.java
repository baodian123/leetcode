class Solution {
    public String intToRoman(int num) {
        String rs = "";
        
        int arr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String s[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < num / arr[i]; j++) {
                rs += s[i];
            }
            num = num % arr[i];
        }
        
        return rs;
    }
}