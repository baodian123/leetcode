class Solution(object):
    def triangularSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return self.solution(nums, len(nums) - 1)
        
    def solution(self, nums, num):
        if num == 0:
            return nums[0]
        for i in range(0, num):
            nums[i] = (nums[i] + nums[i+1]) % 10
        return self.solution(nums, num-1)