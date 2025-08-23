class Solution {
public:
int solve(int m,int n,int row,int col,vector<vector<int>>&dp){
    if(row>=m || row<0 || col>=n || col<0)return 0;
    if(row==m-1 && col == n-1)return 1;
    if(dp[row][col]!=-1)return dp[row][col];
    int down = solve(m,n,row+1,col,dp);
     int right = solve(m,n,row,col+1,dp);
     return dp[row][col] = down+right;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
      return solve(m,n,0,0,dp);
    }
};