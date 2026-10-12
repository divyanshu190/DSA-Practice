class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans(spells.size());
        for(int i = 0; i < spells.size(); i++){
            int left = 0;
            int right = potions.size() - 1;
            while(left <= right){
                int mid = left + (right - left) / 2;
                if(1LL * potions[mid] * spells[i] >= success) right = mid - 1;
                else left = mid + 1;
            }
            ans[i] = potions.size() - left;
        }
        return ans;
    }
};