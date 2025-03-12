class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string temp = s;
        temp += s;
        temp  = temp.substr(1,2*n-2);
        vector<int> v(n*2);
        v[0] = 0;
        int i = 1, j = 0;
        while(i < n){
            if(s[i] == s[j])v[i++] = ++j;
            else{
                if(j)j = v[j-1];
                else v[i++] = 0;
            }

        }
        i = j = 0;
        while(i < temp.size()){
            if(temp[i] == s[j]){
                i++;
                j++;
            }else{
                if(j)j = v[j-1];
                else i++;
            }
            if(j == n)return true;
        }
        return false;
    }
};