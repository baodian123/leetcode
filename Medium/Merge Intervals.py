class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort(cmp=lambda x,y: cmp(x[0],y[0]))
        rs = [intervals[0]]
        for i in range (1, len(intervals)):
            if intervals[i][0] >= rs[-1][0] and intervals[i][0] <= rs[-1][1]:
                if intervals[i][1] > rs[-1][1]:
                    rs[-1][1] = intervals[i][1]
            else:
                rs.append(intervals[i])
        return rs