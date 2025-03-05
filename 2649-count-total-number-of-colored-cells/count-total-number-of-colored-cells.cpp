class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 2LL*n*n - 2LL*n +1;
        return ans;
    }
};