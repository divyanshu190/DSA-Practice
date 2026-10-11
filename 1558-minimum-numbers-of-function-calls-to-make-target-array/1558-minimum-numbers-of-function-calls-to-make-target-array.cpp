class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int maxVal = *max_element(nums.begin(), nums.end());
        while(maxVal > 0){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] % 2 != 0){
                    nums[i]--;
                    ans++;
                }
            }
            maxVal = *max_element(nums.begin(), nums.end());
            if(maxVal == 0) break;
            for(int& i : nums){
                i /= 2;
            }
            ans++;
            maxVal = *max_element(nums.begin(), nums.end());
        }
        return ans;
    }
};