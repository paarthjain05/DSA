class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int curr = 0;
        for(auto i : s){
            if(i == '('){
                curr++;
                ans = max(ans,curr);
            }else if(i == ')')curr--;
        }
        return ans;
    }
};