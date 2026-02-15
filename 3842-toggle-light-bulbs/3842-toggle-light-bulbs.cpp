class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
      unordered_map<int,int>mp;
      for(int i = 0;i<bulbs.size();i++){
        mp[bulbs[i]]++;
      }  
      vector<int>ans;
      for(auto i:mp){
        if(i.second%2!=0)ans.push_back(i.first);
      }
      sort(ans.begin(),ans.end());
      return ans;
    }
};