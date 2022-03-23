class Solution {
    public int brokenCalc(int startValue, int target) {
        if (startValue > target) return startValue - target;
        if (startValue == target) return 0;
        
        return 1 + (target % 2 == 0 ? brokenCalc(startValue, target / 2) : brokenCalc(startValue, target + 1));
    }
}