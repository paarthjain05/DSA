class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;

        long long ans = 0;
        int max_i = nums[0];
        long long max_ij = LLONG_MIN;

        for (int j = 1; j < n - 1; ++j) {
            max_ij = max(max_ij, (long long)max_i - nums[j]);
            ans = max(ans, max_ij * nums[j + 1]);
            max_i = max(max_i, nums[j]);
        }

        return ans;
    }
};
