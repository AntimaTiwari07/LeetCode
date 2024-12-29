class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        set<int>s;
        vector<int>freq;
        vector<int>temp;
        unordered_map<int,int>mp;
        if(nums.size()==1)return{nums[0]};
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(s.find(nums[i])==s.end())s.insert(nums[i]);
        }
        for(auto i:s){
            temp.push_back(i);
        }
       
        for(auto i:s){
            int temp = i;
            int count = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[j]==temp)count++;
            }
            freq.push_back(count);
        }
         for(int i = 0;i<temp.size();i++){
            mp[temp[i]] = freq[i];
        }
        if(temp.size()<=k) 
        {
            return temp;
        }
      else{
        int x = s.size()-k;
        while(x>0){
            int mini = INT_MAX;
            int idx = -1;
            for(auto j :mp){
                if(j.second <mini){
                    mini = j.second;
                    idx = j.first;
                }
            }
            mp.erase(idx);
            x--;
        }
        for(auto i:mp){
            ans.push_back(i.first);
        }
      }
        return ans;
    }
};