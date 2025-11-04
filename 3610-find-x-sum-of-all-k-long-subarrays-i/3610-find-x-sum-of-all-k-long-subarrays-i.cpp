class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i = 0;i<k;i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        int ans = 0;
        for(int j = 0;j<x && pq.size();j++){
            pair<int,int>p = pq.top();
            pq.pop();
            ans+=(p.first*p.second);
        }
        v.push_back(ans);
       int n = nums.size();
        for(int i = 1;i<=n-k;i++){
            mp[nums[i+k-1]]++;
            mp[nums[i-1]]--;
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        int ans = 0;
        for(int j = 0;j<x && pq.size();j++){
            pair<int,int>p = pq.top();
            pq.pop();
            ans+=(p.first*p.second);
        }
        v.push_back(ans);

        }
        return v;
    }
};