class Solution {
public:
    void g(int o, int c, vector<string> &ans, string temp){
        if(o == 0 && c == 0){
            ans.push_back(temp);
            return;
        }
        if(o>0){
            g(o-1,c,ans,temp+'(');
        }
        if(c>o){
            g(o,c-1,ans,temp+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        string t="";
        vector<string> ans;
        g(n,n,ans,t);
        return ans;
    }
};