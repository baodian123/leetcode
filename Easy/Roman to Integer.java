class Solution {
    public int romanToInt(String s) {
        int arr[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        ArrayList<String> as = new ArrayList<>
            (Arrays.asList("M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"));
        
        int rs = 0;
        for (int i = 0; i < s.length(); i++) {
            int j = i+1;
            if (j >= s.length()) {
                rs += arr[as.indexOf("" + s.charAt(i))];
                break;
            }
            int position = as.indexOf("" + s.charAt(i) + s.charAt(j));
            
            if (position != -1) {
                rs += arr[position];
                i += 1;
            }
            else {
                rs += arr[as.indexOf("" + s.charAt(i))];
            }
        }
             
        return rs;
    }
}