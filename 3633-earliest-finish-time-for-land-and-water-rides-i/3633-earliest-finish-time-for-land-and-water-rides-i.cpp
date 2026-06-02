class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini = INT_MAX;
        int time = 0;
        for(int i = 0;i<landStartTime.size();i++){
            time = landStartTime[i]+landDuration[i];
            for(int j = 0;j<waterStartTime.size();j++){
                if(time>=waterStartTime[j]){
                    mini = min(mini,time+waterDuration[j]);
                }
                else if(time<waterStartTime[j]){
                    mini = min(mini,waterStartTime[j]+waterDuration[j]);
                }
            }
        }
                for(int i = 0;i<waterStartTime.size();i++){
            time = waterStartTime[i]+waterDuration[i];
            for(int j = 0;j<landStartTime.size();j++){
                if(time>=landStartTime[j]){
                    mini = min(mini,time+landDuration[j]);
                }
                else if(time<landStartTime[j]){
                    mini = min(mini,landStartTime[j]+landDuration[j]);
                }
            }
        }
        return mini;
    }
};