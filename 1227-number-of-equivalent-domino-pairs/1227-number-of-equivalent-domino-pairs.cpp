class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<string,int>mp;
        vector<string>v;
        for(int i = 0;i<dominoes.size();i++){
            string st = to_string(dominoes[i][0])+to_string(dominoes[i][1]);
            mp[st]++;
        }
        for(auto i:mp){
            v.push_back(i.first);
        }
        int ans = 0;
         int count = 0;
      for(int i = 0;i<v.size();i++){
        string x = v[i];
        bool exist = false;
         reverse(v[i].begin(),v[i].end());
        if( v[i]!=x && mp[v[i]]>0){
            exist = true;
        }
        if(exist){
            count = mp[v[i]]+mp[x];
            mp[v[i]]=0;
            mp[x]=0;
        }
        else{
            count = mp[x];
        }
        if(count>0)count--;
        ans+=(count*(count+1)/2);
      }
        return ans;    
    }
};