class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int i = a.size() - 1, j = b.size() - 1;
        bool carry = false;

        while (i >= 0 || j >= 0 || carry) {
            int temp = carry ? 1 : 0;
            if (i >= 0) temp += (a[i--] - '0');
            if (j >= 0) temp += (b[j--] - '0');

            ans += (temp % 2) + '0';  
            carry = (temp > 1);  
        }

        reverse(ans.begin(), ans.end()); 
        return ans;
    }
};