class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        sa = []
        re = []
        
        for idx in range(len(s)):
            if s[idx] not in re:
                if s[idx] in sa:
                    sa.remove(s[idx])
                    re.append(s[idx])
                else:
                    sa.append(s[idx])
        
        return s.index(sa[0]) if sa else -1