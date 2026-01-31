class Solution {
public:
int solve(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>&dp){
    if(i>=matrix.size() || i<0 || j>=matrix[0].size() || j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int left = 0,right=0,up=0,down=0;
    if(j-1>=0 && matrix[i][j-1]>matrix[i][j]){
        left =  1+ solve(matrix,i,j-1,dp);
    }
    if(j+1<matrix[0].size() && matrix[i][j+1]>matrix[i][j]){
        right = 1+ solve(matrix,i,j+1,dp);
    }
    if(i-1>=0 && matrix[i-1][j]>matrix[i][j]){
        up = 1+solve(matrix,i-1,j,dp);
    }
    if(i+1<matrix.size() && matrix[i+1][j]>matrix[i][j]){
        down = 1+solve(matrix,i+1,j,dp);
    }
  return dp[i][j] = (left+right+up+down)%1000000007;
}
    int countPaths(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        int ans = 0;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                ans = (ans+solve(matrix,i,j,dp)+1)%1000000007;
            }
        }
        return ans%1000000007;
    }
};