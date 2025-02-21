class Solution {
public:
int minPath(vector<vector<int>>&grid,int i,int j,vector<vector<int>>&dp){
    if(i>=grid.size() || j>=grid[0].size())return INT_MAX;//out of bound
     if(i==grid.size()-1 && j==grid[0].size()-1)return grid[i][j];
     if(dp[i][j]!=-1)return dp[i][j];
     //move right
     int right = minPath(grid,i,j+1,dp);
     //move down
     int down = minPath(grid,i+1,j,dp);
     return dp[i][j] = grid[i][j]+min(right,down);
}
//use of chatgpt 
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return minPath(grid,0,0,dp);
    }
};