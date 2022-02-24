class Solution {
    public List<String> rs = new ArrayList<String>();
    public String[] dict = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    public List<String> letterCombinations(String digits) {
        if (digits.length() == 0) return rs;
        
        get_rs("", digits);
        
        return rs;
    }
    
    public void get_rs(String cur, String digits) {
        if (digits.length() == 0) {
            rs.add(cur);
            return;
        }
        
        for (int i=0; i<dict[(digits.charAt(0) - '0') - 2].length(); i++) {
            get_rs(cur + dict[(digits.charAt(0) - '0') - 2].charAt(i), digits.substring(1, digits.length()));
        }
    }
}