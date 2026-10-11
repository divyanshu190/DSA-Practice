class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<int> max_prefix(nums.size(), 0);
        max_prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) max_prefix[i] = max(nums[i], max_prefix[i-1]);
        vector<long long> ans(nums.size(), 0);
        ans[0] = (long long)nums[0] * 2;
        for(int i = 1; i < nums.size(); i++){
            ans[i] = (long long)(ans[i-1] + max_prefix[i] + nums[i]);
        }
        return ans;
    }
};