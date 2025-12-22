class Solution {
public:
void dfs(vector<vector<int>>&v,vector<bool>&vis,int node){
    vis[node] = true;
    for(auto i:v[node]){
        if(!vis[i])dfs(v,vis,i);
    }
}
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<vector<int>>v(n);
        vector<int>reach(n,0);
        for(int i = 0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
            reach[edges[i][1]]=1;
        }
        vector<bool>vis(n,false);
        vector<int>ans;
        for(int i = 0;i<n;i++){
            if(reach[i]==0)ans.push_back(i);
        }
        for(int i = 0;i<ans.size();i++){
                dfs(v,vis,ans[i]);
        }
        
        for(int i = 0;i<n;i++){
            if(!vis[i])ans.push_back(i);
        }
        return ans;
    }
};