class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int sum = 0;
        int n = grid[0].size();
        vector<int> ans(2);
        unordered_set<int> s;
        for(int i = 0; i <n; i++){
            for(int j = 0; j < n; j++){
                if(s.find(grid[i][j])!=s.end()){
                    ans[0] = grid[i][j];
                }else{
                    sum += grid[i][j];
                    s.insert(grid[i][j]);   
                }
            }
        }
        ans[1] = n*n*(n*n + 1)/2 - sum;
        return ans;
    }
};