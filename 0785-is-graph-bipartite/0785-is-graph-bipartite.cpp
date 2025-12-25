class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
      queue<pair<int,char>>q;
      vector<char>vis(graph.size(),'n');
      for(int i = 0;i<graph.size();i++){
        if(vis[i]=='n'&& graph[i].size()>0){
            q.push({i,'g'});
      while(!q.empty()){
       pair<int,char>p = q.front();
       vis[p.first]=p.second;
       q.pop();
       for(auto i:graph[p.first]){
         if(vis[i]=='n'){
            if(p.second=='g')
            q.push({i,'y'});
            else q.push({i,'g'});
         }else if(vis[i]==p.second) return false;
       }
      } 
        }
      }
      return true; 
    }
};