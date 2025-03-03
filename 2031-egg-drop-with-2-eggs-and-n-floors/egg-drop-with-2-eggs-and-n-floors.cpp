class Solution {
public:
    int twoEggDrop(int n) {
        return ceil((sqrt(8LL*n + 1)-1)/2);
    }
};