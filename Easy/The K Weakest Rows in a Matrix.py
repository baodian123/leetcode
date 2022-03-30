class Solution(object):
    def kWeakestRows(self, mat, k):
        """
        :type mat: List[List[int]]
        :type k: int
        :rtype: List[int]
        """
        dt = {}
        
        for i in range(len(mat)):
            soldier = 0
            for x in mat[i]:
                if x == 1:
                    soldier += 1
            dt[i] = soldier
        dt = sorted(dt.items(), key=lambda x: x[1])
        rs = []
        for r in range(k):
            rs.append(dt[r][0])
            
        return rs