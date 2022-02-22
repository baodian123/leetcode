class Solution {
    public int trailingZeroes(int n) {
        int two = 0, five = 0, ten = 0;
        
        for (int i=n; i>1; i--) {
            int temp = i;
            while (true) {
                if (temp % 2 == 0) {
                    temp /= 2;
                    two += 1;
                }
                else if (temp % 5 == 0) {
                    temp /= 5;
                    five += 1;
                }
                else if (temp % 10 == 0) {
                    temp /= 10;
                    ten += 1;
                }
                else break;
            }
        }
        
        int result = two > five ? five : two;
        return result + ten;
    }
}