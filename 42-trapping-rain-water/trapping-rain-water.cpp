class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        vector<int>a(n,-1);
        vector<int>b(n,-1);
        a[0] = h[0];
        b[n-1] = h[n-1];
        for(int i = 1; i < n; i++){
            a[i] = max(a[i-1],h[i]);
        }
        for(int i = n-2; i >=0; i--){
            b[i] = max(b[i+1],h[i]);
        }
        for(int i = 0; i < n; i++){
            a[i] = min(a[i],b[i]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += a[i]-h[i];
        }
        return ans;
    }
};