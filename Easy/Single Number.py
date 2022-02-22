class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = sorted(nums)
        
        i = 0
        
        while True:
            if i+1 >= len(nums):
                break
            
            if s[i] != s[i+1]:
                return s[i]
            else:
                i += 2
        return s[-1]