class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<vector<int>>arrivalTime;

         vector<vector<int>>departureTime;

        for(int i = 0;i<times.size();i++){
            arrivalTime.push_back({times[i][0],i});
            departureTime.push_back({times[i][1],i});
        }

        sort(arrivalTime.begin(),arrivalTime.end());
        sort(departureTime.begin(),departureTime.end());

      priority_queue<int,vector<int>,greater<int>>chair;

       for(int i =0;i<arrivalTime.size();i++){
        chair.push(i);
       }

       unordered_map<int,int>mp;
       // person     chair
       int i =0;
       int j =0;
       for (int time = 0; time <= arrivalTime.back()[0]; time++) {
            // Handle departures before arrivals at the same time
            while (j < departureTime.size() && departureTime[j][0] == time) {
                chair.push(mp[departureTime[j][1]]);
                j++;
            }

            // Handle arrivals
            while (i < arrivalTime.size() && arrivalTime[i][0] == time) {
                mp[arrivalTime[i][1]] = chair.top();
                chair.pop();
                i++;
            }
        }

       return mp[targetFriend];
    }
};