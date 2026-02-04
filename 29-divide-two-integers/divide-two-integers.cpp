class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)return INT_MAX;
        if (divisor == 1)return dividend;
        if (divisor == dividend)return 1;
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long long ans = 0;
        long long temp = 0;
        long long t2 = llabs(divisor);
        long long dvd = llabs(dividend);
        while (dvd >= t2) {
            while ((t2 << 1) <= dvd) {
                temp++;
                t2 <<= 1;
            }
            ans += (1LL << temp);
            dvd -= t2;
            temp = 0;
            t2 = llabs(divisor);
        }
        return sign * ans;
    }
};
