class Solution {
public:
    vector<bool> sieve(int n) {

        vector<bool> prime(n + 1, true);

        for (int p = 2; p * p <= n; p++) {

            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        return prime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> prime = sieve(right);
        vector<int> primeIdx;
        prime[1] = false;

        for (int i = left; i <= right; i++) {
            if (prime[i]) primeIdx.push_back(i);
        }

        if (primeIdx.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        int idx = -1;

        for (int i = 0; i < primeIdx.size() - 1; i++) {
            int diff = primeIdx[i + 1] - primeIdx[i];
            if (diff < minDiff) {
                minDiff = diff;
                idx = primeIdx[i];
            }
        }
        return {idx, idx + minDiff};
    }
};