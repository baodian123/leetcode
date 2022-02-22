class Solution {
    public int titleToNumber(String columnTitle) {
        int ini = 1;
        int ret = 0;
        while (columnTitle.length() != 0) {
            ret += ini * (columnTitle.charAt(columnTitle.length()-1) - 'A' + 1);
            columnTitle = columnTitle.substring(0, columnTitle.length()-1);
            ini *= 26;
        }
        
        return ret;
    }
}