class Solution {
public:
    bool checkString(string s) {
        bool b = false;
        for(auto c:s){
            if(c=='b')b=true;
            if(b && c =='a')return false;
        }
        return true;
        
    }
};