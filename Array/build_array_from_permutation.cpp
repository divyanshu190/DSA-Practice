class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            sol.push_back(nums[nums[i]]);
        }
        return sol;
    }
};
