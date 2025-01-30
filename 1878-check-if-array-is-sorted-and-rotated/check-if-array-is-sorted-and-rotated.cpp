class Solution {
public:
    bool check(vector<int>& nums) {
        bool a = true;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] > nums[i+1] && a)a=false;
            else if(nums[i] > nums[i+1] && !a)return false;
        }
        if(a)return true;
        if(nums[0] >= nums[nums.size()-1])return true;
        return false;
    }
};