class Solution {
    public int countPrimes(int n) {
        if (n <= 2) return 0;
        
        boolean p[] = new boolean[n];
        int count = 1;
        
        for (int i=3; i<n; i+=2) {
            if (!p[i]) {
                count += 1;
                for (int j=1; j*i<n; j++) {
                    p[j*i] = true;
                }
            }
        }
        
        return count;
    }
}