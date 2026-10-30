class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int, int> m;
        for(int i = 0 ; i < nums.size(); i++){
            m[nums[i]] = i;
        }
        for(auto i : operations){
            int idx = m[i[0]];
            nums[idx] = i[1];
            m[i[1]] = idx;
            m.erase(i[0]);
        }
        return nums;
    }
};