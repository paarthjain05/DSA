class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o = -1;
        for(auto i:s){
            if(i == '1')o++;
        }
        int z = s.size() - 1 - o;
        string ans = "";
        while(o--)ans+='1';
        while(z--)ans+='0';
        ans+='1';
        return ans;

    }
};