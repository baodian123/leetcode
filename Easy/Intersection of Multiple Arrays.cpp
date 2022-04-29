class Solution(object):
    def intersection(self, nums):
        """
        :type nums: List[List[int]]
        :rtype: List[int]
        """
        rs = []
        
        for i in nums[0]:
            add = True
            for array in nums:
                if i not in array:
                    add = False
                    break
            if add:
               rs.append(i)
        return sorted(rs)