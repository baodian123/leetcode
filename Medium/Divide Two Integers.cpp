class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        
        int sign = (dividend > 0 ^ divisor > 0) == 0 ? 1 : -1;
        return sign * (labs(dividend) / labs(divisor));
    }
};