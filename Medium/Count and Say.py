class Solution(object):
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        rs = "1"
        
        for i in range(2, n+1):
            temp = ""
            idx, cnt, cur = 1, 1, rs[0]
            while idx < len(rs):
                if rs[idx] != rs[idx-1]:
                    temp += str(cnt) + cur
                    cur = rs[idx]
                    cnt = 1
                else: cnt += 1
                idx += 1
            temp += str(cnt) + cur
            rs = temp
        
        return rs