class Solution(object):
    def largestPerimeter(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        
        i = len(nums) - 1
        j = len(nums) - 3
        
        while j >= 0:
            if nums[j] + nums[j+1] > nums[i]:
                return nums[j] + nums[j+1] + nums[i]
            i -= 1
            j -= 1
        
        return 0