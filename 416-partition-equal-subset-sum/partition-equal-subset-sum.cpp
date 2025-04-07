class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1)
            return false;
        sort(nums.begin(), nums.end());
        int t = sum / 2;
        vector<bool> dp(t + 1, false);
        dp[0] = true;
        for (int num : nums) {
            for (int j = t; j >= num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        if (dp[t])
            return true;
        return false;
    }
};