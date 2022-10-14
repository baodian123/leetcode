class Solution(object):
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        table, morse_set = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.",
                            "---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."], []
        
        for word in words:
            morse = ""
            for c in word:
                morse += table[ord(c)-97]
            morse_set.append(morse)
        return len(set(morse_set))