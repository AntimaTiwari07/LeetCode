class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       vector<int>minutes;
       for(int i = 0;i<timePoints.size();i++){
            int store_hr = (timePoints[i][0]-'0')*10 + (timePoints[i][1]-'0') ;
            minutes.push_back(((store_hr )* 60)+((timePoints[i][3]-'0')*10 +  timePoints[i][4]-'0'));
       }
       sort(minutes.begin(),minutes.end());
       int minimum = INT_MAX;
       for(int i= 0;i<minutes.size()-1;i++){
        if((abs(minutes[i]-minutes[i+1]))<minimum) {
           minimum = abs(minutes[i]-minutes[i+1]);
        }
       }
       int day_min = 24*60;
       minimum = min(minimum,day_min-(minutes[minutes.size()-1]-minutes[0]));
       return minimum;

    }
};