class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        bool abc = false;
        for(int i = s.size() -1; i>= 0; i--){
            if(s[i]!=' '){
                abc = true;
                ans++;
            }else if(abc)break;
        }
        return ans;
    }
};