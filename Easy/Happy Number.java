class Solution {
    public boolean isHappy(int n) {
        List ls = new ArrayList();
        
        while (true) {
            int sum = 0;
            while (n != 0) {
                sum += (n % 10)*(n % 10);
                n /= 10;
            }
            if (sum == 1) return true;
            else {
                if (ls.contains(sum)) break;
                ls.add(sum);
                n = sum;
            }
        }
        
        return false;
    }
}