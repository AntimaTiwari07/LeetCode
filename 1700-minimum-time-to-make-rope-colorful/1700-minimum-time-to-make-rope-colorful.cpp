class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time = 0;
        if(colors.size()==1)return time;
        int i = 0;
        int j = 1;
        while(i<colors.size() && j<colors.size()){
            if(colors[i]==colors[j] && neededTime[j]<neededTime[i]){
                time+=neededTime[j];
                j++;
            }
            else if(colors[i]==colors[j] && neededTime[i]<=neededTime[j]){
                 time+=neededTime[i];
                 i = j;
                 j++;
            }
            else{
                i= j;
                j++;
            }
        }
        return time;
    }
};