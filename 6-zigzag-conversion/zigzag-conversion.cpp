class Solution {
public:
    string convert(string s, int numRows) {
        int n = numRows;
        if(n==1)return s;
        vector<string> arr(n,"");
        int i = 0;
        bool inc = true;
        for(char c:s){
            arr[i]+=c;
            cout << c << i;
            if(inc)i = i+1;
            else i = i-1;
            if(i == 0)inc = true;
            if(i == n-1)inc = false;
        }
        string ans ="";
        for(auto c:arr)ans+=c;
        return ans;
        
    }
};