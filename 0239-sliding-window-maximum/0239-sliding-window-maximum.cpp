class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>q;
        int maxi = INT_MIN;
        for(int i = 0;i<k;i++){
            q.push({nums[i],i});
            maxi = max(maxi,nums[i]);
        }
        vector<int>ans;
        ans.push_back(maxi);
        for(int i = 0;i<nums.size()-k;i++){
            mp[i] = 1;
            pair<int,int>p = q.top();
            while(!q.empty() && mp[p.second]==1){
                q.pop();
               p = q.top();
            }
            int maxnum ;
            if(q.empty()){
                maxnum= nums[k+i];
            }
         else  maxnum = p.first;
          ans.push_back(max(maxnum,nums[k+i]));
          q.push({nums[k+i],k+i});
        }
      return ans;
    }
};