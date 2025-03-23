class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      sort(intervals.begin(),intervals.end());
      vector<vector<int>>v;
      int st = intervals[0][0];
      int end =INT_MIN;
      for(int i = 0;i<intervals.size()-1;i++){
        end = max(end,intervals[i][1]);
        if(end<intervals[i+1][0]){
            v.push_back({st,end});
            st = intervals[i+1][0];
            end = INT_MIN;
        }
      } 
      end = max(end,intervals[intervals.size()-1][1]);
      v.push_back({st,end});
      return v; 
    }
};