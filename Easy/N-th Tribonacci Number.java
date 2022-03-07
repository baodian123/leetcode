class Solution {
    public int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;
        
        int[] array = new int[n+1];
        
        array[0] = 0;
        array[1] = 1;
        array[2] = 1;
        array[3] = 2;
        
        for (int i=4; i<=n; i++) {
            array[i] = array[i-1] * 2 - array[i-4];
        }
        
        return array[n];
    }
}