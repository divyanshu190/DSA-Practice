class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        curr = 0
        for i in range(len(nums)):
            curr ^= nums[i]
        for i in range(len(nums) + 1):
            curr ^= i
        return curr