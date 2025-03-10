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
       

        priority_queue<int,vector<int>,greater<int>>time;
        for(int i = 0;i<times.size();i++){
            time.push(times[i][0]);
             time.push(times[i][1]);
        }
              while(!time.empty()){
            // Handle departures before arrivals at the same time
            while (j < departureTime.size() && departureTime[j][0] == time.top()) {
                chair.push(mp[departureTime[j][1]]);
                j++;
            }

            // Handle arrivals
            while (i < arrivalTime.size() && arrivalTime[i][0] == time.top()) {
                mp[arrivalTime[i][1]] = chair.top();
                chair.pop();
                i++;
            }
            time.pop();
        }

       return mp[targetFriend];
    }
};