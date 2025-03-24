class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int temp = -1;
        for(auto c: meetings){
            if (c[0] > temp) days -= (c[1] - c[0] + 1);
            else if (c[1] > temp) days -= (c[1] - temp);
            temp = max(temp, c[1]);
        }
        return days;
    }
};