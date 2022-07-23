class Solution(object):
    def countSmaller(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        temp = sorted(nums)
        rs = []
        
        for num in nums:
            idx = bisect_left(temp, num)
            rs.append(idx)
            del temp[idx]
        
        return rs