class Solution {
    public int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;
        int left = 2;
        int right = x-1;
        int target;
        while(true) {
            target = (left + right) / 2;
            int sqrt = x / target;
            int nSqrt = x / (target+1);
            if (sqrt == target || (target < sqrt && (target+1) > nSqrt)) break;
            else {
                if (target > sqrt) right = target - 1;
                else left = target + 1;
            }
        }
        return target;
    }
}