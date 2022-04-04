class Solution(object):
    def convertTime(self, current, correct):
        """
        :type current: str
        :type correct: str
        :rtype: int
        """
        hcur = int(current[:2])
        hcor = int(correct[:2])
        
        mcur = int(current[-2:])
        mcor = int(correct[-2:])
        
        cnt = int(correct[:2]) - int(current[:2])
        mdif = int(correct[-2:]) - int(current[-2:])
        if mdif < 0:
            mdif += 60
            cnt -= 1
        
        cnt += mdif / 15
        mdif %= 15
        
        cnt += mdif / 5
        mdif %= 5
        
        cnt += mdif
        
        return cnt