//class Solution {
//public:
/*
    long long findScore(vector<int>& nums) {
        unordered_map<int,bool>valid;
        int maxnum = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            valid[i] = false;
        }
        long long score = 0;
        int smallest = INT_MAX;
        int count  = 0;
         while(count<nums.size()){
            int idx = -1;
            smallest = INT_MAX;
            for(int j = 0;j<nums.size();j++){
                if(nums[j]<smallest && valid[j]==false){
                    smallest = nums[j];
                     idx = j;
                }
            }
           score+=smallest;
           valid[idx] = true;
           count+=1;
          if(idx-1>=0 && valid[idx-1]!=1){
         valid[idx-1]=  true;
          count+=1;
          }
           if(idx+1<nums.size() && valid[idx+1]!=1)  {
            valid[idx+1] = true;
            count+=1;
        }
        }
        return score;
        */

class Solution {
public:
    long long findScore(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<bool> visited(n, false);
        long long score = 0;

        // Min-heap to store {value, index}
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> minHeap;
        for (int i = 0; i < n; ++i) {
            minHeap.emplace(nums[i], i);
        }

        while (!minHeap.empty()) {
            auto [smallest, idx] = minHeap.top();
            minHeap.pop();

            // Skip if the current index is already marked
            if (visited[idx]) continue;

            // Mark the current index and add its value to the score
            score += smallest;
            visited[idx] = true;

            // Mark neighbors if within bounds
            if (idx - 1 >= 0) visited[idx - 1] = true;
            if (idx + 1 < n) visited[idx + 1] = true;
        }

        return score;
    }
};