class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<bool>rem( n + 1 , false); 
        for(int b : banned){
           if( b <= n) rem[b] = true;
        }
        int sum = 0 ;
        int ans = 0;
        for(int i = 1 ; i <= n ;i++){
           if (rem[i]) continue;
            if (sum + i > maxSum)
                break;
            sum += i;
            ans++;
        }
        return ans;
    }
};