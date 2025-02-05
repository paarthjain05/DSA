class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int max = 0;
        for(auto c:nums){
            if(!max)ans = c;
            if(c==ans)max++;
            else max--;
        }
        return ans;
    }
};