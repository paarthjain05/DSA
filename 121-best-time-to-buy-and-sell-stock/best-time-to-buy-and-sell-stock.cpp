class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        vector<int> pm;
        pm.push_back(m);
        for(int i = 1; i < prices.size(); i++){
            m = min(m,prices[i]);
            pm.push_back(m);
        }
        int ans = INT_MIN;
        for(int i = 0; i <prices.size(); i++){
            ans = max(ans,prices[i] - pm[i]);
        }
        return ans;
    }
};