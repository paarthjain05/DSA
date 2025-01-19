class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maximum = 0;
        
        for(int i = 0; i < s.length(); i++){
            set<char> s1;
            for(int j = i; j<s.length(); j++){
                if (s1.find(s[j]) != s1.end()) break;
                s1.insert(s[j]);
            }
            maximum = max(maximum,(int)s1.size());
        }
        return maximum;
    }
};