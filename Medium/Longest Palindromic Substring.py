class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        def check(x, y):
            while x >= 0 and y < len(s) and s[x] == s[y]:
                x -= 1
                y += 1
            return (y-x-1, x+1, y)

        if len(s) == 1:
            return s[0]
        if len(s) == 2:
            if s[0] == s[1]:
                return s
            else:
                return s[0]
        
        rl = 0
        rs = ""
        for i in range(len(s)-1):
            odd, os, oe = check(i, i)
            even, es, ee = check(i, i+1)
            cur = max(odd, even)
            if cur > rl:
                rl = cur
                if cur == odd:
                    rs = s[os:oe]
                else:
                    rs = s[es:ee]
        return rs