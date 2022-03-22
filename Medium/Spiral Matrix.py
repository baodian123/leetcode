class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        r = len(matrix[0])
        c = len(matrix)
        sr = 0
        sc = 0
        rs = []
        
        l = r * c
        
        while c >= sc or r >= sr:
            for x in range(sr, r):
                if len(rs) == l:
                    break
                rs.append(matrix[sc][x])
            for x in range(sc+1, c):
                if len(rs) == l:
                    break
                rs.append(matrix[x][r-1])
            for x in range(r-2, sr-1, -1):
                if len(rs) == l:
                    break
                rs.append(matrix[c-1][x])
            for x in range(c-2, sc, -1):
                if len(rs) == l:
                    break
                rs.append(matrix[x][sr])
            
            r -= 1
            c -= 1
            sr += 1
            sc += 1
        
        return rs