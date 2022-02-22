class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        lst = []
        
        for idx in range(1, n+1):
            isT = idx % 3 == 0
            isF = idx % 5 == 0
            
            if isT and isF:
                lst.append("FizzBuzz")
            elif isT:
                lst.append("Fizz")
            elif isF:
                lst.append("Buzz")
            else:
                lst.append(str(idx))
        return lst