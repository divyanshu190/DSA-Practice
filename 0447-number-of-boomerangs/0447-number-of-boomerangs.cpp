class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int ans = 0;
        for(auto i : points){
            unordered_map<int, int> m;
            for(auto j : points){
                int dx = i[0] - j[0];
                int dy = i[1] - j[1];
                m[dx*dx + dy*dy]++;
            }
            for(auto i : m){
                ans += i.second * (i.second - 1);
            }
        }
        return ans;
    }
};