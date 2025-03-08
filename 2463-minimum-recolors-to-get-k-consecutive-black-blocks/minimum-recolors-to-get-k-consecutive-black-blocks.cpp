class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        vector<int> v;
        for(auto c: blocks){
            if(c == 'W')v.push_back(0);
            if(c == 'B')v.push_back(1);
        }
        int ans = INT_MAX;
        for(int i = 0; i <= blocks.size()-k; i++){
            ans = min(ans,k-accumulate(v.begin() + i, v.begin() + i + k, 0));
        }
        return ans;
    }
};