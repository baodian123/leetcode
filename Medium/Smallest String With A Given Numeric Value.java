class Solution {
    public String getSmallestString(int n, int k) {
        StringBuilder rs = new StringBuilder("");
        
        for (int i=0; i<n; i++) rs.append('a');
        
        k -= n;
        int top = n - 1;
        
        while (k != 0) {
            if (k > 25) {
                rs.setCharAt(top, (char)(rs.charAt(top) + 25));
                top -= 1;
                k -= 25;
            } else {
                rs.setCharAt(top, (char)(rs.charAt(top) + k));
                k = 0;
            }
        }
        
        return rs.toString();
    }
}