class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while n >= 3:
            if n % 3 != 0:
                break
            n /= 3
        if n == 1:
            return True
        return False