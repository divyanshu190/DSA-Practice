class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());
        int ans = 0;
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] < i + 1) return i;
        }
        return citations.size();
    }
};

/*

[3, 0, 6, 1, 5] -> [6, 5, 3, 1, 0]


*/