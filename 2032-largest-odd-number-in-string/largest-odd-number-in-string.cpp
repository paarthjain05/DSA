class Solution {
public:
    string largestOddNumber(string num) {
        int ans = -1;
        for(int i = num.size()-1; i >=0; i--){
            if((num[i]-'0') &1){
                ans = i;
                break;
            }
        }
        if(ans == -1)return "";
        else return num.substr(0,ans+1);
    }
};