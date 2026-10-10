class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());   
        sort(nums2.begin(), nums2.end());   
        int prev = nums2[0] - nums1[0];
        for(int i = 1 ; i < nums1.size(); i++){
            if(nums2[i] - nums1[i] != prev) return -1;
        } 
        return prev;
    }
};