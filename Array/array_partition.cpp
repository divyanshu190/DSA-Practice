class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
        int sum=0;
        
        for(int i=0;i<nums1.size();i+=2){
            sum+=nums1[i];
        }
        return sum;
    }
};
