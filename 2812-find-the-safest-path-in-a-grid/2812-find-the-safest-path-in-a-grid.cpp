class Solution {
public:
   bool path(vector<vector<int>>&grid,int k){
    queue<pair<int,int>>q;
    if(grid[0][0]>=k)q.push({0,0});
    else return false;
    vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),false));
    vis[0][0] = false;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
    int i = p.first,j = p.second;
         if(i==grid.size()-1 && j==grid[0].size()-1)return true;
            if(j+1<grid[0].size() && grid[i][j+1]>=k && !vis[i][j+1]){
                vis[i][j+1] = true;
                q.push({i,j+1});
            }
            if(i+1<grid.size() && grid[i+1][j]>=k && !vis[i+1][j]){
                vis[i+1][j] = true;
                q.push({i+1,j});
            }
            if(j-1>=0 && grid[i][j-1]>=k && !vis[i][j-1]){
                vis[i][j-1] = true;
                q.push({i,j-1});
            }
            if(i-1>=0 && grid[i-1][j]>=k && !vis[i-1][j]){
                vis[i-1][j] = true;
                q.push({i-1,j});
            }
    }
    return false;
   }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j]==1){q.push({i,j});
                grid[i][j] = 0;
                vis[i][j] = 1;
                }
                else grid[i][j] = INT_MAX;
            }
        }
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            int i = p.first,j = p.second;
            
            if(j+1<grid[0].size() && vis[i][j+1]==0){
                vis[i][j+1] = 1;
                q.push({i,j+1});
                grid[i][j+1] = min(grid[i][j+1],grid[i][j]+1);
            }
            if(i+1<grid.size() && vis[i+1][j]==0){
                vis[i+1][j] = 1;
                q.push({i+1,j});
                grid[i+1][j] = min(grid[i+1][j],grid[i][j]+1);
            }
            if(j-1>=0 && vis[i][j-1]==0 ){
                vis[i][j-1] = 1;
                q.push({i,j-1});
                grid[i][j-1] = min(grid[i][j-1],grid[i][j]+1);
            }
            if(i-1>=0 && vis[i-1][j]==0){
                vis[i-1][j] = 1;
                q.push({i-1,j});
                grid[i-1][j] = min(grid[i-1][j],grid[i][j]+1);
            }
        }

        int st = 0;
        int end = grid.size()-1;
        int mid;
        int ans = 0;
        while(st<=end){
            mid = st+(end-st)/2;
            if(path(grid,mid)){
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};