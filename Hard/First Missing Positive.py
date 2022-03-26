class Solution(object):
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        i = 0
        
        while i < len(nums):
            if nums[i] - 1 != i and nums[i] < len(nums) and nums[i] > 0 and nums[i] != nums[nums[i] - 1]:
                temp = nums[i]
                nums[i] = nums[nums[i] - 1]
                nums[temp - 1] = temp
            else:
                i += 1
    
        for i in range(len(nums)):
            if nums[i] - 1 != i:
                return i + 1
        return len(nums) + 1