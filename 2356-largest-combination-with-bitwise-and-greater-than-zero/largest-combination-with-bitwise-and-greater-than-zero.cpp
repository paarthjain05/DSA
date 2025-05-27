class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        sort(candidates.begin(), candidates.end());
        int x = 1;
        int ans = 0;
        while(x <= candidates[candidates.size()-1]){
            int curr = 0;
            for(auto c:candidates){
                if(c&x)curr++;
            }
            x<<=1;
            ans = max(ans,curr);
        }
        return ans;
    }
};