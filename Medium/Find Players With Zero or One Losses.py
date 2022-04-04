class Solution(object):
    def findWinners(self, matches):
        """
        :type matches: List[List[int]]
        :rtype: List[List[int]]
        """
        st1 = []
        st2 = []
        
        d = {}
        
        for match in matches:
            if match[1] not in d:
                d[match[1]] = -1
            else:
                d[match[1]] -= 1
            if match[0] not in d:
                d[match[0]] = 0
        for k, v in d.items():
            if v == 0:
                st1.append(k)
            elif v == -1:
                st2.append(k)
        
        return [sorted(st1), sorted(st2)]