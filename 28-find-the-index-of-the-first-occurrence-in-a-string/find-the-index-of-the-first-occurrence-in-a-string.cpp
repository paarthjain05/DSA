class Solution {
public:
    int strStr(string haystack, string needle) {
        vector<int> lps(needle.size());
        int i = 1, j = 0;
        lps[0] = 0;
        while (i < needle.size()) {
            if (needle[i] == needle[j])
                lps[i++] = ++j;
            else {
                if (j)
                    j = lps[j - 1];
                else
                    lps[i++] = 0;
            }
        }
        i = 0;
        j = 0;
        while (j < haystack.size()) {
            if (haystack[j] == needle[i]) {
                i++;
                j++;
            } else {
                if (i)
                    i = lps[i-1];
                else
                    j++;
            }
            if (i == needle.size())
                return j - i;
        }
        return -1;
    }
};