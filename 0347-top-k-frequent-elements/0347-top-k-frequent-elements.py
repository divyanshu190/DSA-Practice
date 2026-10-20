class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = {}
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        out = sorted(freq, key = freq.get, reverse = True)
        return out[:k]