class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0;
        int t = 0;
        for(auto i:bills){
            if(i==5)f++;
            if(i==10){
                f--;
                t++;
            }
            if(i==20){
                if(t){
                    t--;
                    f--;
                }else{
                    f-=3;
                }
            };
            if(f<0)return false;
        }
        return true;
    }
};