class Solution {
public:
bool solve(int i,vector<int>&dp){
    if(i==0){
       return false;  
    }
    if(dp[i]!=-1)return dp[i];
    for(int j = 1;j*j<=i;j++){
        if(solve(i-j*j,dp)==false)return dp[i] = true; //bob se pucha whether you get the true 
    }
    return   dp[i] = false;}
    bool winnerSquareGame(int n) {
        vector<int>dp(n+1,-1);
       return solve(n,dp); 
    }
};