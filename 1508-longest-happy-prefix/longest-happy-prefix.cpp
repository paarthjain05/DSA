class Solution {
public:
    string longestPrefix(string s) {
        int n = s.size();
        vector<int> v(n);
        v[0] = 0;
        int i =1, j = 0;
        while(i<n){
            if(s[i] == s[j])v[i++] = ++j;
            else{
                if(j)j = v[j-1];
                else v[i++] = 0;
            }
        }
        return s.substr(0,v[n-1]);
    }
};