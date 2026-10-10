class Solution {
public:
    int minOperations(int k) { // we have to minimize (A + M) -> where A is increase in ele,  M -> how many time we add it to last
        int ans = k;
        for(int i = 1 ; i <= k ; i++){
            ans = min(ans, (i - 1) + (k + i - 1) / i - 1);
        }
        return ans;
    }
};
/*

can we use binary search here? yes i guess

*/