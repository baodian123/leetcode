class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> rs = new ArrayList<String>();
        generate(rs, "", n, n);
        
        return rs;
    }
    
    public void generate(List<String> rs, String s, int l, int r) {
        if (l == r) {
            generate(rs, s + "(", l-1, r);
        } else if (l == 0) {
            for (int i=0; i<r; i++) s += ")";
            rs.add(s);
        } else {
            generate(rs, s + "(", l-1, r);
            generate(rs, s + ")", l, r-1);
        }
    }
}