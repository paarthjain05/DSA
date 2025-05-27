class Solution {
public:
    int countOdds(int low, int high) {
        int s = low&1?low:low+1;
        int e = high&1?high:high-1;
        return (e-s)/2 + 1;
    }
};