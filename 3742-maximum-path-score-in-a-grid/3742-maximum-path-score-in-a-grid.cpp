class Solution {
public:
int f(vector<vector<int>>& grid, int k,int cost,int i,int j,vector<vector<vector<int>>>&dp){
    if(i==grid.size()-1 && j==grid[0].size()-1){
        if(grid[i][j]!=0)cost+=1;
        if(cost>k)return -1e9;
        return grid[i][j];
    }
    if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size() || cost>k) return -1e9;
    if(grid[i][j]!=0)cost+=1;
    if(cost>k)return -1e9;
     if(dp[i][j][cost]!=-1)return dp[i][j][cost];
    return dp[i][j][cost] = max(grid[i][j]+f(grid,k,cost,i,j+1,dp) , grid[i][j]+f(grid,k,cost,i+1,j,dp));

}
    int maxPathScore(vector<vector<int>>& grid, int k) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(k+1,-1)));
        int x = f(grid,k,0,0,0,dp);
        if(x>=0)return x;
        return -1;
    }
};