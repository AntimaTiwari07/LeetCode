class Solution {
public:
bool dfs(unordered_map<int,vector<int>>&mp,int src,int des,vector<bool>&visited){
    if(src==des)return true;
    if(visited[src])return false;
    visited[src] = true;
    for(auto i:mp[src]){
        if(dfs(mp,i,des,visited))return true;
    }
    return false;
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(int i = 0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool>visited(n,false);
        return dfs(mp,source,destination,visited);
    }
};