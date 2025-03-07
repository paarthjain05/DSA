class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time = -1;
        int totalTime = 0;
        for(int i = 0; i < timeSeries.size(); i++){
            if(timeSeries[i] <= time){
                totalTime += timeSeries[i] + duration -1 - time;
            }else{
                totalTime += duration;
            }
            time = timeSeries[i] + duration -1;
        }
        return totalTime;
    }
};