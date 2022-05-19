class Solution(object):
    def shortestPathBinaryMatrix(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        l = len(grid)
        s = [[-1, -1], [-1, 0], [-1, 1], [0, -1], [0, 1], [1, -1], [1, 0], [1, 1]]
        
        q = deque([(1, 0, 0)]) if grid[0][0] == 0 else deque()
        v = set()
        
        while q:
            d, x, y = q.popleft()
            if x == l-1 and y == l-1:
                return d
            for x1, y1 in s:
                if 0 <= x+x1 < l and 0 <= y+y1 < l and grid[x+x1][y+y1] == 0 and (x+x1, y+y1) not in v:
                    v.add((x+x1, y+y1))
                    q.append((d+1, x+x1, y+y1))
        return -1