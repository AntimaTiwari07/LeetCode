class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int m = matrix.size();
        int n = matrix[0].size();
         vector<vector<int>>dp(m,vector<int>(n,0));
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