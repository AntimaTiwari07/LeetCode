class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+2,0);
        for(int i = 0;i<bookings.size();i++){
            diff[bookings[i][0]]+=bookings[i][2];
             diff[bookings[i][1]+1]-=bookings[i][2];

        }
        for(int i = 1;i<diff.size();i++){
            diff[i]=diff[i]+diff[i-1];
        }
        diff.erase(diff.begin()+0);
        diff.pop_back();
        return diff;
    }
};