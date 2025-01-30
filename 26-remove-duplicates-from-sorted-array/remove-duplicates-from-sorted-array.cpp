class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 0;
        unordered_set<int> s;
        s.insert(nums[idx++]);
        for(int i = 1; i<nums.size(); i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
                nums[idx++] = nums[i];
            }
        }
        return idx;
    }
};