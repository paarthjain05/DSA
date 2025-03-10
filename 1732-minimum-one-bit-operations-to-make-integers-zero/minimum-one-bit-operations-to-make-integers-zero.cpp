class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n==1 || n==0)return n;
        if(n==2)return 3;
        if(n==3)return 2;
        if(n==4)return 7;
        int t = pow(2,(int)log2(n));
        int ans = 2* t -1;
        n-=t;
        return ans - minimumOneBitOperations(n);
        // int curr = 4;
        // int idx = 5;
        // vector<int> dp(n+1);
        // dp[0] = 0;
        // dp[1] = 1;
        // dp[2] = 3;
        // dp[3] = 2;
        // dp[4] = 7;
        // while(idx <= n){
        //     int temp = idx-curr;
        //     if(temp == curr){
        //         curr*=2;
        //         dp[idx] = 2*curr-1;
        //     }else dp[idx] = dp[curr] - dp[temp];
        //     // cout << dp[idx] << '\n';
        //     idx++;
        // }
        // return dp[n];
    }

};