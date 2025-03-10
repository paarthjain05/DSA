class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        vector<int> dup(n);
        dup[0] = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < n; i++){
            dup[i] = dup[i-1] + (nums[i] == nums[i-1]);
        }
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int l = upper_bound(nums.begin(), nums.end(),nums[i] +n-1) - nums.begin()-1;
            ans = min(ans, n - l + i - 1 + dup[l] - dup[i]);
        }
        return ans;
    }
};