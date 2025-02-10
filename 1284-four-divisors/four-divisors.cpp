class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for (auto c : nums) {
            int sum = 0;
            int count = 0;
            for (int i = 1; i * i <= c; i++) {
                if (c % i == 0) {
                    sum += i;
                    count++;
                    if (i != c / i) {
                        sum += c / i;
                        count++;
                    }
                }
                if (count > 4)
                    break;
            }

            if (count == 4)
                ans += sum;
        }
        return ans;
    }
};