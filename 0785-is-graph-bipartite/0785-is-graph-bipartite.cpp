class Solution {
public:
// 1-green color ,0 - yellow color 
bool dfs(int node,vector<vector<int>>& graph,vector<int>&color){
    int x = true;
   for(auto i:graph[node]){
    if(color[i]==-1){
        color[i]=!color[node];
        x = x && dfs(i,graph,color);
    }
    else if(color[i]==color[node])return false;
   }
   return x;
}
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),-1);
        for(int i = 0;i<graph.size();i++){
            if(color[i]==-1){
                color[i]=0;
                if(dfs(i,graph,color)==false)return false;
            }
        }
        return true;
    }
};