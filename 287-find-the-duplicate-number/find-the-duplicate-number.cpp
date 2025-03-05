class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int c: nums){
            if(s.find(c)!=s.end())return c;
            s.insert(c);
        }
        return -1;
    }
};