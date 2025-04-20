class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       unordered_map<int,int>mp;
       for(int i = 0;i<groupSizes.size();i++){
        mp[groupSizes[i]]++;
       }
       int size = 0;
       for(auto i:mp){
          size+=(i.second/i.first);
       }
       vector<vector<int>>ans(size);
       int p = 0;
       for(auto i:mp){
        for(int j = 0;j<(i.second/i.first);j++){
            for(int l = 0;ans[p].size()<i.first && l<groupSizes.size();l++){
                if(groupSizes[l]==i.first){
                    ans[p].push_back(l);
                    groupSizes[l]=0;
                }
           }
           p++;
        }
       }
       return ans;

    }
};