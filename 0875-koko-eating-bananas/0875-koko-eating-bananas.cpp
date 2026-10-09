class Solution {
public:
    long long checker(vector<int>& nums, int val){
        long long ans = 0;
        for(int i : nums){
            ans += (i + (long long)val - 1) / val;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = INT_MIN;
        for(int i : piles){
            if(i > right) right = i;
        }
        // int left = piles[0];
        int left = 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            long long time = checker(piles, mid);
            if(time > h){
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return left;
    }
};
/*

I guess :- binary search 

*/