class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        def find_midian(l):
            if len(l)%2 == 0:
                return (float(l[len(l)/2-1]) + float(l[len(l)/2])) / 2.0
            else:
                return float(l[len(l)/2])
        if not nums1:
            rs = find_midian(nums2)
        elif not nums2:
            rs = find_midian(nums1)
        else:
            length = len(nums1)
            i = 0
            while i < length and nums2:
                if nums2[0] < nums1[0]:
                    nums1.insert(0, nums2[0])
                    length += 1
                    del nums2[0]
                elif nums2[0] >= nums1[i-1] and nums2[0] < nums1[i]:
                    nums1.insert(i, nums2[0])
                    length += 1
                    del nums2[0]
                else:
                    i += 1
            if nums2:
                nums1.extend(nums2)
            rs = find_midian(nums1)
        return rs
            
            