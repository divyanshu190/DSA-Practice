class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int n = triplets.size();
        bool ans = true;
        vector<int> temp = {INT_MIN, INT_MIN, INT_MIN};
        for(auto& i : triplets){
            if(target[0] >= i[0] && target[1] >= i[1] && target[2] >= i[2]){
                temp[0] = max(temp[0], i[0]);
                temp[1] = max(temp[1], i[1]);
                temp[2] = max(temp[2], i[2]);
            }
        }
        return temp == target;
    }
};