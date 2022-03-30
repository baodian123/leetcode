class Solution(object):
    def minDeletion(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = len(nums)
        r = []
        
        for i in nums:
            if len(r) % 2 == 1 and len(r) != 0 and i == r[-1]:
                continue
            r.append(i)
        
        if len(r) % 2 == 1:
            return l - len(r) + 1
        return l - len(r)