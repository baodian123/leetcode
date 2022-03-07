class Solution {
    public boolean isSubsequence(String s, String t) {
        if (s.length() == 0) return true;
        if (t.length() == 0) return false;
        
        int top = 0;
        
        for (int i=0; i<t.length(); i++) {
            if (t.charAt(i) == s.charAt(top)) {
                if (++top == s.length()) return true;
            }
        }
        
        return false;
    }
}