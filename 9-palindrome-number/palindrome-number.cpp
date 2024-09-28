class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return 0;
        }else{
            long long rev=0;
            int temp=x;
            while(temp!=0){
                int digit=temp%10;
                rev=rev*10+digit;
                temp=(temp-digit)/10;
            }
            if(rev==x){
                return 1;
            }else{
                return 0;
            }
        }
    return 0;
    }
};