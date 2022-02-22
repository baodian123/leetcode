class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        slen = len(s)
        rs = ""

        for i in range(numRows):
            if i < slen:
                rs += s[i]
            temp = i
            if (temp == 0) or (numRows-temp-1 == 0):
                patch = numRows*2 - 2
                while (temp+patch) < slen and patch > 0:
                    temp += patch
                    rs += s[temp]
            else:
                r1 = (numRows-2)*2 - (temp-1)*2
                r2 = 2 + (temp-1)*2
                
                payload = r1
                while (temp+payload) < slen:
                    temp += payload
                    rs += s[temp]
                    
                    if payload == r1:
                        payload = r2
                    else:
                        payload = r1
        return rs