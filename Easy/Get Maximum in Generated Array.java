class Solution {
    public int getMaximumGenerated(int n) {
        if (n < 2) return n;
        
        int[] array = new int[n+1];
        
        array[0] = 0;
        array[1] = 1;
        int max = 1;
        
        for (int i=2; i<=n; i++) {
            if (i % 2 == 0) array[i] = array[i/2];
            else array[i] = array[(i-1)/2] + array[(i-1)/2+1];
            
            max = max >= array[i] ? max : array[i];
        }
        
        return max;
    }
}