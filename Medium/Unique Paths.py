class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        if m == 1 or n == 1: return 1
        return self.c(n+m-2, min(m, n)-1)
    
    def c(self, n, m):
        rs = 1
        temp = m
        
        while m != 0:
            rs *= n
            n -= 1
            m -= 1
        while temp != 0:
            rs /= temp
            temp -= 1
        return rs