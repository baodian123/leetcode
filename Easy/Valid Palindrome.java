class Solution {
    public boolean isPalindrome(String s) {
        String ns = s.toLowerCase();
        
        int left = 0, right = ns.length()-1;
        boolean flag = true;
        
        while (left < right) {
            if ((ns.charAt(left) < 0x61 || ns.charAt(left) > 0x7A) && (ns.charAt(left) < 0x30 || ns.charAt(left) > 0x39))
                left += 1;
            else if ((ns.charAt(right) < 0x61 || ns.charAt(right) > 0x7A) && (ns.charAt(right) < 0x30 || ns.charAt(right) > 0x39))
                right -= 1;
            else {
                if (ns.charAt(left) != ns.charAt(right)) {
                    flag = false;
                    break;
                }
                else {
                    left += 1;
                    right -= 1;
                }
            }
        }
        
        return flag;
    }
}