class Solution {
public:
void dfs(vector<vector<int>>& isConnected,int n,int i,vector<bool>&vis){
   vis[i] = true;
   for(int j = 0;j<n;j++){
    if(!vis[j] && isConnected[i][j]==1){
        dfs(isConnected,n,j,vis);
    }
   }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int node = isConnected.size();
        vector<bool>vis(node,false);
        int cnt = 0;
        for(int i = 0;i<vis.size();i++){
            if(!vis[i]){
                cnt+=1;
                dfs(isConnected,node,i,vis);
            }
        }
     return cnt;
    }
};