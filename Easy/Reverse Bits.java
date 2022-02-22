public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int ret = n & 1;
        int t = 31;
        
        n >>>= 1;
                
        while (n != 0 || t != 0) {
            ret <<= 1;
            ret = ret | (n & 1);
            n >>>= 1;
            t -= 1;
        }
        
        return ret;
    }
}