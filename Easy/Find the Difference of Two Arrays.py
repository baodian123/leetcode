class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """
        nums1 = set(nums1)
        nums2 = set(nums2)
        rs1 = []
        rs2 = []
        
        for n1 in nums1:
            if n1 not in nums2:
                rs1.append(n1)
        
        for n2 in nums2:
            if n2 not in nums1:
                rs2.append(n2)
        
        return [rs1, rs2]