class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x1 = 0, x2 = 0;
        if(nums1.size()&1){
            for(auto c: nums2)x1 ^= c;
        }
        if(nums2.size()&1){
            for(auto c:nums1)x2 ^= c;
        }
        return x1^x2;
    }
};