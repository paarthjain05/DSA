class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left = 0, right = nums.size() - 1;
        int index = nums.size() - 1;
        while (left <= right) {
            int lS = nums[left] * nums[left];
            int rS = nums[right] * nums[right];
            if (lS > rS) {
                ans[index] = lS;
                left++;
            } else {
                ans[index] = rS;
                right--;
            }
            index--;
        }
        return ans;
    }
};