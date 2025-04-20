class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
      vector<vector<int>>res;
      int n = groupSizes.size();
     vector<vector<int>>mp(n+1);
      for(int i = 0;i<groupSizes.size();i++){
        int x = groupSizes[i];
        mp[x].push_back(i);
        if(mp[x].size()== x){
            res.push_back(mp[x]);
            mp[x] = {};
        }
      }
     return res;
    }
};