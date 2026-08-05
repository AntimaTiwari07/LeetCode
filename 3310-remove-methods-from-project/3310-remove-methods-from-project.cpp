class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>called_by(n);
        unordered_map<int,int>sus;
        for(int i = 0;i<invocations.size();i++){
            mp[invocations[i][0]].push_back(invocations[i][1]);
            called_by[invocations[i][1]].push_back(invocations[i][0]);
        }
        queue<int>q;
        q.push(k);
        vector<bool>vis(n,false);
        vis[k] = true;
        while(!q.empty()){
           int s = q.front();
           q.pop();
           sus[s]++;
           for(auto i:mp[s]){
            if(!vis[i]){
                vis[i] = true;
                q.push(i);
            }
           }
        }
        vector<int>ans;
        for(int i = 0;i<n;i++){
            ans.push_back(i);
        }
        for(auto i:sus){
           for(int j = 0;j<called_by[i.first].size();j++){
           if(sus.find(called_by[i.first][j])==sus.end()){
            return ans;
           }
           } 
        }
        vector<int>v;
        for(int i = 0;i<n;i++){
          if(sus.find(i)==sus.end())v.push_back(i);
        }
        return v;
    }
};