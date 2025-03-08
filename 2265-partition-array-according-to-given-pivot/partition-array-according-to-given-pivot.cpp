class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int temp = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= pivot)temp++;
        }
        int l = 0, r = temp;
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot)ans[l++] = nums[i];
            if(nums[i] > pivot)ans[r++] = nums[i];
        }
        while(l<temp){
            ans[l++] = pivot;
        }
        return ans;
    }
};