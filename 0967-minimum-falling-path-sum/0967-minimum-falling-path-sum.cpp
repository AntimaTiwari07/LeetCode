class Solution {
public:
int solve(vector<vector<int>>& matrix,int row,int col,vector<vector<int>>&dp){
    if(row<0 || row>=matrix.size() || col<0 || col>=matrix[0].size()) return 1e9;
    if(row==matrix.size()-1)return matrix[row][col];
    if(dp[row][col]!=-1)return dp[row][col];
    int left = solve(matrix,row+1,col-1,dp);
    int down = solve(matrix,row+1,col,dp);
    int right = solve(matrix,row+1,col+1,dp);
    return dp[row][col] = matrix[row][col]+min({left,right,down});
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        vector<vector<int>>dp(101,vector<int>(101,0));
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0;i<n;i++){
            dp[m-1][i] = matrix[m-1][i];
        }
        for(int row = m-2;row>=0;row--){
            for(int col = 0;col<n;col++){
                int left = 1e9,right=1e9,down = 1e9;
                if(col-1>=0) left = dp[row+1][col-1];
                if(col<n) down = dp[row+1][col];
                if(col+1<n) right = dp[row+1][col+1];
                
           dp[row][col] = matrix[row][col]+min({left,right,down});
            }
       
        }
       
        for(int i = 0;i<n;i++){
           ans = min(ans,dp[0][i]);
        }
        
        return ans;
    }
};