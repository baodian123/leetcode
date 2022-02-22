class Solution {
    public String longestCommonPrefix(String[] strs) {
        String rs = "";
        
        int i = 0;
        while(true) {
            try {
                boolean ie = true;
                for (int j = 1; j < strs.length; j++) {
                    if (strs[j].charAt(i) != strs[0].charAt(i)) {
                        ie = !ie;
                        break;
                    }
                }
                if (ie) {
                    rs += strs[0].charAt(i);
                    i++;
                }
                else {
                    break;
                }
            }
            catch (Exception e){
                break;
            }
        }
        
        return rs;
    }
}