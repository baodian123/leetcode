public class Solution {
    public string FirstPalindrome(string[] words) {
        foreach (string word in words) {
            if (isPalindrome(word)) return word;
        }

        return "";
    }

    public bool isPalindrome(string s) {
        int b = 0, e = s.Length - 1;

        while (b < e) {
            if (s[b] != s[e]) return false;
            b++;
            e--;
        }

        return true;
    }
}