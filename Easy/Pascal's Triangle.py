class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows == 1:
            return [[1]]
        if numRows == 2:
            return [[1], [1, 1]]
        rs = [[1], [1, 1]]
        for num in range(2, numRows):
            r = []
            for i in range(0, num+1):
                if i == 0 or i == num:
                    r.append(1)
                else:
                    r.append(rs[num-1][i-1] + rs[num-1][i])
            rs.append(r)
        return rs