class Solution {
public:
    bool isPowerOfTwo(int n) {
        int pow = 0;
        if(n==0){
            return false;
        }
        while (n != 1 && n!=0) {
            if (n % 2 == 0) {
                n = n / 2;
                pow += 1;
            } else {
                return false;
            }
        }
        return true;
    }
};