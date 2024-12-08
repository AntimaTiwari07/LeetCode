/*
class Solution {
public:

int binarysearch(vector<vector<int>>& events,int endtime){
    int st = 0;
    int end = events.size()-1;
    int mid;
    int result = -1;
    while(st<=end){
        mid = st+(end-st)/2; 
        if(events[mid][0]>endtime){
            result = mid;
            end = mid-1;
        }
        else st = mid+1;
    }
    return result;
}
int solve(vector<vector<int>>& events,int index,int count){
    //base case
    if(count==2 || index>=events.size()){
        return 0 ;
    }

     //take value
     int validEventIndex = binarysearch(events,events[index][1]);//return 1st index greater then events[i][1]
     int take = events[index][2] +solve(events,validEventIndex,count+1);
     //skip
     int skip =  solve(events,index+1,count);

    return max(take,skip);
}
    int maxTwoEvents(vector<vector<int>>& events) {
     sort(events.begin(),events.end());
   
      int count = 0;
      return solve(events,0,count);
    }
};

*/

class Solution {
public:
    // Memoization table to store results for (index, count)
    unordered_map<string, int> memo;

    // Binary search to find the first valid event index with a start time > endtime
    int binarySearch(vector<vector<int>>& events, int endtime) {
        int st = 0, end = events.size() - 1, mid;
        int result = -1;
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (events[mid][0] > endtime) {
                result = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return result;
    }

    // Solve function with memoization
    int solve(vector<vector<int>>& events, int index, int count) {
        // Base case: If we have taken 2 events or reached the end of the events list
        if (count == 2 || index >= events.size()) {
            return 0;
        }

        // Create a unique key for memoization
        string key = to_string(index) + "-" + to_string(count);

        // If the result is already computed, return it
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }

        // Take the current event
        int validEventIndex = binarySearch(events, events[index][1]);
        int take = events[index][2] + solve(events, validEventIndex, count + 1);

        // Skip the current event
        int skip = solve(events, index + 1, count);

        // Store the result in memo and return the maximum of take and skip
        return memo[key] = max(take, skip);
    }

    int maxTwoEvents(vector<vector<int>>& events) {
        // Sort events by start time
        sort(events.begin(), events.end());
        // Clear the memoization table before starting
        memo.clear();
        // Start solving from the first event with count 0
        return solve(events, 0, 0);
    }
};