class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(auto c: details)ans += ((c[11] - '0')*10 + c[12]-'0') > 60?1:0;
        return ans;
    }
};