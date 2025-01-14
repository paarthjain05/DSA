class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f, l;
        f = lower_bound(nums.begin(),nums.end(), target) - nums.begin();
        l = upper_bound(nums.begin(),nums.end(), target) - nums.begin() - 1;
        if (f < nums.size() && nums[f] == target) {
            return {f, l};
        } else {
            return {-1, -1};
        }
    }
};