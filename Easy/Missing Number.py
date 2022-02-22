class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        cnt = 0
        
        for idx in range(0, len(nums)):
            if nums[idx] != cnt:
                return cnt
            cnt += 1
        return cnt