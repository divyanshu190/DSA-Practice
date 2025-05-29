class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a = 0;
        int b = 0;

        for (int num : nums) {
            if (a == 0) {
                b = num;
            }
            a += (num == b) ? 1 : -1;
        }

        return b;
    }
};
