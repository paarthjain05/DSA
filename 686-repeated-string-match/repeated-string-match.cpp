class Solution {
public:
    int strStr(string a, string b) {
        if (b.empty())
            return 0;

        vector<int> lps(b.size(), 0);
        int i = 1, j = 0;
        while (i < b.size()) {
            if (b[i] == b[j]) {
                lps[i++] = ++j;
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }

        i = 0;
        j = 0;
        while (j < a.size()) {
            if (a[j] == b[i]) {
                i++;
                j++;
            } else {
                if (i != 0)
                    i = lps[i - 1];
                else
                    j++;
            }
            if (i == b.size())
                return j - i;
        }
        return -1;
    }

    int repeatedStringMatch(string a, string b) {
        int ans = 1;
        string temp = a;

        while (temp.length() < b.length()) {
            temp += a;
            ans++;
        }

        if (strStr(temp, b) != -1)
            return ans;

        temp += a;
        if (strStr(temp, b) != -1)
            return ans + 1;

        return -1;
    }
};
