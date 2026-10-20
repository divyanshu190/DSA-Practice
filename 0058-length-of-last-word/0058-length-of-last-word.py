class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        left = 0
        right = 0
        ans = 0
        while left < len(s) and s[left] == ' ':
            left += 1
        right = left
        while right < len(s):
            left = right
            while right < len(s) and s[right] != ' ':
                right += 1
            ans = right - left
            while right < len(s) and s[right] == ' ':
                right += 1
        return ans

            