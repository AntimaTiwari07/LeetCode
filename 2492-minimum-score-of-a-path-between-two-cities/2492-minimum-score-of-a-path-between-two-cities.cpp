class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<pair<int,int>>>mp;
        for(int i = 0;i<roads.size();i++){
            mp[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            mp[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        vector<int>v(n+1,INT_MAX);
        v[1] = INT_MAX;
        queue<pair<int,int>>q;
        q.push({INT_MAX,1});
        while(!q.empty()){
          pair<int,int>p= q.front();
          q.pop();
          int node = p.second,cost = p.first;
          for(auto [n,c]:mp[node]){
            if(min(cost,c)<v[n]){
                v[n] =min(cost,c);
                q.push({v[n],n});
            }
          }
        }
      return v[n];
    }
};