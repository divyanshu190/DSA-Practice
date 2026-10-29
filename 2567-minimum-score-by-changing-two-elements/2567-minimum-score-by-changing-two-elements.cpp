class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        int ls = 0, hs = 0, sum = INT_MAX;
        int mx = INT_MIN, mn = INT_MAX;

        for (int i : nums) {
            mx = max(mx, i);
            mn = min(mn, i);
        }

        sort(nums.begin(), nums.end());

        sum = min({
            nums[n-1] - nums[2],
            nums[n-2] - nums[1],
            nums[n-3] - nums[0]
        });

        return sum;
    }
};