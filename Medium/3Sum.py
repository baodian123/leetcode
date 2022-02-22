class Solution(object):
    def threeSum(self, nums):
        ln = len(nums)
        if ln < 3:
            return []

        table = [[0 for x in range(ln)] for y in range(ln)]
        ns = []
        sn = sorted(nums)

        for i in range(ln):
            left = i + 1
            right = ln - 1

            if i > 0 and sn[i-1] == sn[i]:
                continue

            while left < right:
                n = sn[i] + sn[left] + sn[right]
                if n == 0:
                    x = [sn[i], sn[left], sn[right]]
                    if x not in ns:
                        ns.append(x)
                    right -= 1
                    left += 1
                else:
                    if n > 0:
                        right -= 1
                    else:
                        left += 1

        return ns