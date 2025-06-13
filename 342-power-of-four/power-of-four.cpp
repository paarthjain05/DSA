class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)return false;
        int x = 1431655765;
        int a = x|n;
        int b = x&n;
        if(__builtin_popcount(a) == 16 && __builtin_popcount(b) == 1)return true;
        return false;
        
    }
};