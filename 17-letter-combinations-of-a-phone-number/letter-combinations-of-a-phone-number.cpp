class Solution {
public:
    vector<string> al = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void g(vector<string> &s, string t, int i, string d){
        if(i == d.size()){
            s.push_back(t);
            return;
        }
        for(int j = 0; j<al[d[i]-'0'].size(); j++){
            t+=al[d[i]-'0'][j];
            g(s,t,i+1,d);
            t.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> s;
        g(s,"",0,digits);
        return s;
        
    }
};