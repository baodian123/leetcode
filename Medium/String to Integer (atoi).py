class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        rs = ""
        start = False
        
        max = (1 << 31) - 1
        min = -1 << 31
        
        for c in s:
            if not start:
                if c != ' ' and c != '-' and not(c >= '0' and c <= '9') and c != '+':
                    return 0
                if c != ' ':
                    rs += c
                    start = True
                continue
            if c >= '0' and c <= '9':
                rs += c
            else:
                break
        try:
            r = int(rs)
        except:
            return 0
        if r > max:
            return max
        if r < min:
            return min
        return r