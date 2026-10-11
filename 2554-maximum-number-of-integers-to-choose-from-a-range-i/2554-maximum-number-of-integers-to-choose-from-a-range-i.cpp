class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> s;
        for(int i : banned){
            if(i <= n) s.insert(i);
        }
        int ans = 0;
        int curr_sum = 0;
        for(int i = 1; i <= n ;i++){
            if(s.find(i) != s.end()){
                continue;
            }
            if(curr_sum + i > maxSum) break;
            curr_sum += i;
            ans++;
        }
        return ans;
    }
};