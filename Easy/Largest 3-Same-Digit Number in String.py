class Solution(object):
    def largestGoodInteger(self, num):
        """
        :type num: str
        :rtype: str
        """
        rs = ""
        
        for i in range(2, len(num)):
            if num[i] == num[i-1] and num[i] == num[i-2]:
                if rs == "":
                    rs += (num[i]*3)
                else:
                    if rs[0] < num[i]:
                        rs = (num[i]*3)
        return rs