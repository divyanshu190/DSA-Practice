class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i : nums) minHeap.push(i);
        while(k--){
            int top = minHeap.top();
            minHeap.pop();
            top += 1;
            minHeap.push(top);
        }
        long long ans = 1;
        long long NIG = 1e9 + 7;
        while(!minHeap.empty()){
            ans = (ans * minHeap.top()) % NIG;
            minHeap.pop();
        }
        return ans;
    }
};
