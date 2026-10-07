class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        vector<string> ans;
        for(string word : words){
            string s = word;
            for(char &i : s) i = tolower(i);
            int row = 0;
            if(s1.find(s[0]) != -1) row = 1;
            else if(s2.find(s[0]) != -1) row = 2;
            else row = 3;
            bool some = true;
            for(char i : s){
                if(row == 1 && s1.find(i) == -1){
                    some = false;
                    break;
                }
                if(row == 2 && s2.find(i) == -1){
                    some = false;
                    break;
                }
                if(row == 3 && s3.find(i) == -1){
                    some = false;
                    break;
                }
            }
            if(some) ans.push_back(word);
        }
        return ans;
    }
};