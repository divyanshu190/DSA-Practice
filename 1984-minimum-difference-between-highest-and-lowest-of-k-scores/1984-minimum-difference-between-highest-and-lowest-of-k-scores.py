class Solution:
    def minimumDifference(self, nums: list[int], k: int) -> int:
        if k == 1:
            return 0
        nums.sort()
        ans = float('inf')
        for i in range(len(nums) - k + 1):
            ans = min(ans, nums[i + k - 1] - nums[i])
        return ans