class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        int i = 0;
        while(i < nums.size()){
            if(st.empty()){
                st.push(nums[i]);
                i++;
                continue;
            }
            if(st.top() > nums[i]){
                while(i < nums.size() && nums[i] < st.top()){
                    i++;
                }
            }
            if(i < nums.size()){
                st.push(nums[i]);
                i++;
            }
        }
        int ans = 0;
        while(!st.empty()){
            st.pop();
            ans++;
        }
        return ans;
    }
};