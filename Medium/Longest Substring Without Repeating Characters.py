class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s:
            return 0
        result = 0
        for i in range(len(s)):
            count = 1
            j = i+1
            temp = [s[i]]
            while j < len(s) and s[j] not in temp:
                count += 1
                temp.append(s[j])
                j += 1
            if result < count:
                result = count
        return result