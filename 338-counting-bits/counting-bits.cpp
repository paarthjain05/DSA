class Solution {
public:
    vector<int> countBits(int n) {
        // nlogn
        // vector<int> ans(n+1,0);
        // for(int i = 0; i<=n; i++){
        //     int temp = i;
        //     while(temp>0){
        //         ans[i] += temp%2;
        //         temp/=2;
        //     }
        // }
        // return ans;

        // n(with inbuilt function)
        // vector<int> ans2(n+1);
        // for(int i = 0; i<=n; i++){
        //     ans2[i] = __builtin_popcount(i);
        // }
        // return ans2;

        //n(without inbuilt function)
        vector<int> ans3(n+1);
        ans3[0] = 0;
        if(n == 0)return ans3;
        ans3[1] = 1;
        if(n==1)return ans3;
        for(int i = 2; i<= n; i++){
            if(i%2)ans3[i] = ans3[i-1] + 1;
            else ans3[i] = ans3[i/2];
        }
        return ans3;
    }
};