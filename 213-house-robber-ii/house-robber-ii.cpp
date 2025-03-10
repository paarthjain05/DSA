class Solution {
public:
    int rob1(vector<int>& nums, int s, int l) {
        int n = l - s + 1;
        if (n == 1)return nums[s];
        if (n == 2)return max(nums[s], nums[s + 1]);

        vector<int> dp(n);
        dp[n - 1] = nums[l];
        dp[n - 2] = max(nums[l - 1], nums[l]);

        for(int i = n - 3; i >= 0; i--)dp[i] = max(nums[s + i] + dp[i + 2], dp[i + 1]);
        return dp[0];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        else if(n==2)return max(nums[1],nums[0]);
        return max(rob1(nums, 0, n - 2), rob1(nums, 1, n-1));
    }
};