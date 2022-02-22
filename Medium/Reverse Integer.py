class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        max_int = (1 << 31) - 1
        min_int = -1 << 31
        is_negative = False
        if x < 0:
            is_negative = True
            s = str(x)[1:]
        elif x == 0:
            return 0
        else:
            s = str(x)
        rs = ""
        start = False
        for x in range(len(s)):
            if s[(len(s)-x-1)] != '0':
                start = True
            if start:
                rs += s[(len(s)-x-1)]
        if is_negative:
            if -int(rs) < min_int:
                return 0
            return -int(rs)
        if int(rs) > max_int:
            return 0
        return int(rs)