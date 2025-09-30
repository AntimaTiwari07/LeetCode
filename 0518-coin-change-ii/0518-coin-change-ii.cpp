class Solution {
public:
int solve(int amount, vector<int>& coins,int i,vector<vector<int>>&dp){
    if(i==coins.size())return 0;
    if(amount==0)return 1;
    if(dp[i][amount]!=-1)return dp[i][amount];
    int take = 0;
    if(amount>=coins[i]){
        take = solve(amount-coins[i],coins,i,dp);
    }
    int not_take = solve(amount,coins,i+1,dp);
    return dp[i][amount] = take+not_take;
}
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return solve(amount,coins,0,dp);

    }
};