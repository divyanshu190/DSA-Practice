class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0;
        for(int i : nums) sum += i;
        long long diff = abs(sum - goal);
        if(diff % limit == 0) return diff/limit;
        return diff/limit + 1;
    }
};