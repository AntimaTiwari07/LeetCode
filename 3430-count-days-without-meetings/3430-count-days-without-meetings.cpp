class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>>v;
      int st = meetings[0][0];
      int end =INT_MIN;
      for(int i = 0;i<meetings.size()-1;i++){
        end = max(end,meetings[i][1]);
        if(end<meetings[i+1][0]){
            v.push_back({st,end});
            st = meetings[i+1][0];
            end = INT_MIN;
        }
      } 
      end = max(end,meetings[meetings.size()-1][1]);
      v.push_back({st,end});
      int diff = 0;
      for(int i = 0;i<v.size();i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
        diff = diff +(v[i][1]-v[i][0]+1);
      }
         return days-diff;
    }
};