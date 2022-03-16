class Solution(object):        
    def minRemoveToMakeValid(self, s):
        """
        :type s: str
        :rtype: str
        """
        l = 0
        r = 0
        i = 0
        
        while i < len(s):
            if s[i] == '(':
                l += 1
            if s[i] == ')':
                if r + 1 > l:
                    s = s[:i] + s[i + 1:]
                    i -= 1
                else:
                    r += 1
            i += 1
        idx = len(s) - 1
        while l != r:
            if s[idx] == '(':
                s = s[:idx] + s[idx + 1:]
                l -= 1
            idx -= 1
        
        return s