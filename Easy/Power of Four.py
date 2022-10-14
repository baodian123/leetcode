class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n > 0 and not(n & (n-1)) and int(sqrt(n)) * int(sqrt(n)) == n