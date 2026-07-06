class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int cnt = 0;
        for(int i = 0;i<intervals.size();i++){
            if(intervals[i][0]!=INT_MAX && intervals[i][1]!=INT_MIN){
            for(int j = 0;j<intervals.size();j++){
                if(i!=j && intervals[j][0]!=INT_MAX && intervals[j][1]!=INT_MIN &&intervals[i][1]>=intervals[j][1] && intervals[i][0]<=intervals[j][0]  ){
                    cnt+=1;
                    intervals[j][1] = INT_MIN;
                    intervals[j][0] = INT_MAX;
                }
            }
            }
        }
        return intervals.size()-cnt;
    }
};