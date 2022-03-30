class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        return self.binary_search(nums, target, 0, len(nums) - 1)
    
    def binary_search(self, nums, target, left, right):
        if nums[left] == target:
            return left
        
        if nums[right] == target:
            return right
        
        if right - left <= 1:
            return -1
        
        middle = (left + right) >> 1
        
        pl = self.binary_search(nums, target, left, middle)
        
        if pl != -1:
            return pl
        
        pr = self.binary_search(nums, target, middle, right)
        
        if pr != -1:
            return pr
        
        return -1