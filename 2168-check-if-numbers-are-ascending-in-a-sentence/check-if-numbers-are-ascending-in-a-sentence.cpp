class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = INT_MIN;
        int current = 0;
        bool buildingNumber = false;

        for (auto c : s) {
            if (isdigit(c)) {
                current = current * 10 + (c - '0');
                buildingNumber = true;
            } else {
                if (buildingNumber) {
                    if (current <= prev) return false;
                    prev = current;
                    current = 0;
                    buildingNumber = false;
                }
            }
        }

        if (buildingNumber) {
            if (current <= prev) return false;
        }

        return true;
    }
};
