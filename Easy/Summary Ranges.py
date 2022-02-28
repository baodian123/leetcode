class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """ 
        rs = []
        if len(nums) == 0:
            return rs
        
        front = nums[0];
        for i in range(len(nums)):
            if i + 1 >= len(nums) or nums[i+1] - nums[i] != 1:
                if front == nums[i]:
                    rs.append("{}".format(front))
                else:
                    rs.append("{}->{}".format(front, nums[i]))
            if i + 1 < len(nums) and nums[i+1] - nums[i] != 1:
                front = nums[i+1]
        
        return rs