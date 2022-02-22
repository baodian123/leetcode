class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        nl = len(nums)
        
        for idx in range(nl):
            if nums[idx] == 0:
                fast = idx + 1
                while fast < nl:
                    if nums[fast] != 0:
                        nums[idx], nums[fast] = nums[fast], nums[idx]
                        break
                    fast += 1
            else:
                pre = idx - 1
                target = -1
                while pre > 0:
                    if nums[pre] == 0:
                        target = pre
                    pre -= 1
                if target != -1:
                    nums[idx], nums[fast] = nums[fast], nums[idx]
        return nums