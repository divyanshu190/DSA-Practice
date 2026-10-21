class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        vo = ['a', 'e', 'i', 'o', 'u']
        curr = 0
        left = 0
        right = 0
        while right < k:
            if s[right] in vo: 
                curr += 1
            right += 1
        ans = curr
        while right < len(s):
            if s[right] in vo:
                curr += 1
            if s[left] in vo:
                curr -= 1
            ans = max(curr, ans)
            right += 1
            left += 1
        return ans
