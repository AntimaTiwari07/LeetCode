class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        unordered_map<int,int>mp;
        for(int i = 0;i<k;i++){
            mp[nums[i]]++;
        }
        int n = nums.size();
        vector<int>v;
         priority_queue<int>pq;
         unordered_map<int,int>temp = mp;
            for(auto i:mp){
                pq.push(i.second);
            }
            int cnt = x;
            int ans = 0;
            while(cnt!=0){
                int val = pq.top();
                pq.pop();
                int maxi = 0;
                for(auto i:temp){
                if(i.second==val)maxi = max(maxi,i.first);
                }
                temp[maxi]=0;
                cnt-=1;
                ans+= val*maxi;
            }
           v.push_back(ans);
        for(int j = 1;j<=n-k;j++){
            mp[nums[j-1]]--;
            mp[nums[j+k-1]]++;
            priority_queue<int>pq;
           unordered_map<int,int>temp = mp;
            for(auto i:mp){
                pq.push(i.second);
            }
            int cnt = x;
            int ans = 0;
            while(cnt!=0){
                int val = pq.top();
                pq.pop();
                int maxi = 0;
                for(auto i:temp){
                if(i.second==val)maxi = max(maxi,i.first);
                }
               
                temp[maxi]=0;
                cnt-=1;
                ans+= val*maxi;
            }
            
            v.push_back(ans);
            
        }
        return v;
    }
};