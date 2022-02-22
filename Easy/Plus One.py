class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        adder = -1
        
        while True:
            digits[adder] = str((int(digits[adder])+1)%10)
            if digits[adder] == "0":
                adder = adder - 1
                
                if adder*(-1) == len(digits)+1:
                    digits.insert(0, "1")
                    break
            else:
                break
        return digits