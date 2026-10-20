class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        freq = {}
        for i in nums1:
            freq[i] = freq.get(i, 0) + 1
        ans = []
        for i in nums2:
            if i in freq:
                ans.append(i)
                freq.pop(i)
        return ans