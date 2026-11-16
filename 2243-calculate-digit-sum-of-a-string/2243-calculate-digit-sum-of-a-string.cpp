class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size() > k){
            string replace;
            for(int i = 0 ; i < s.size(); i+=k){
                int num = 0;
                for(int j = i; j < min(i + k, (int)s.size()); j++){
                    num += (s[j] - '0');
                }
                replace += to_string(num);
            }
            s = replace;
        }
        return s;
    }
};