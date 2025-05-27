class Solution {
public:
    int totalMoney(int n) {
        int full = n / 7;
        int rem = n % 7;
        
        int week = (56 + (full - 1)*7)*full/2;

        int remSum = 0;
        for (int i = 0; i < rem; ++i)
            remSum += full + 1 + i;

        return week + remSum;
    }
};
