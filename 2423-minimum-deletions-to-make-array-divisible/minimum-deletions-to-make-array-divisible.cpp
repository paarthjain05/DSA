class Solution {
public:
    int minOperations(vector<int>& n, vector<int>& nd) {
        int l = nd.size();
        int g = 0;
        sort(n.begin(),n.end());
        for(int i = 0; i < l; i++){
            g = __gcd(g,nd[i]);
        }
        // if(g == 1)retun -1;
        for(int i = 0; i < n.size(); i++){
            if(g % n[i] == 0)return i;
        }
        return -1;
    }
};