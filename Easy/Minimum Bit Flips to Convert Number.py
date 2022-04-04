class Solution(object):
    def minBitFlips(self, start, goal):
        """
        :type start: int
        :type goal: int
        :rtype: int
        """
        conbine = start ^ goal
        cnt = 0
        
        while conbine != 0:
            cnt += conbine & 1
            conbine = conbine >> 1
            
        return cnt