class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        set<int> abc;
        for(int i = n-1; i >=0; i--){
            if(abc.find(nums[i])!= abc.end()){
                return (i/3 + 1);
            }
            abc.insert(nums[i]);
        }
        return 0;
    }
};