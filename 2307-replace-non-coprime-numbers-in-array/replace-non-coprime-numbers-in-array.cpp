class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<long long> st;
        st.push(nums[0]);
        for(long long i = 1; i < nums.size(); i++){
            long long temp = nums[i];
            while(!st.empty() && __gcd(st.top(),temp) > 1){
                long long top = st.top();
                st.pop();
                temp = top*temp/__gcd(top,temp);
            }
            st.push(temp);
        }
        vector<int> ans;
        while(!st.empty()){ans.push_back(st.top());st.pop();}
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
