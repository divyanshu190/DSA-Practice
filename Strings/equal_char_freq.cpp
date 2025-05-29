class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(char c : s){
            m[c]++;
        }
        int p = m.begin()->second;
        for(auto a : m){
            if(a.second!=p){
                return false;
            }
        }
        return true;
    }
};
