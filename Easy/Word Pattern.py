class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        words = s.split(' ')
        if len(words) != len(pattern):
            return False

        d = {}

        for i, c in enumerate(pattern):
            if (c in d.keys() and d[c] != words[i]) or (c not in d.keys() and words[i] in d.values()):
                return False
            d[c] = words[i]
        
        return True