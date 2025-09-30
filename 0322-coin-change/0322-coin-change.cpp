class Solution {
public:
int solve(vector<int>& coins, int amount,int i,vector<vector<int>>&dp){
  if(i==coins.size()|| amount<0)return 1e9;
  if(amount==0)return 0;
  if(dp[i][amount]!=-1)return dp[i][amount];
  int not_take = solve(coins,amount,i+1,dp);
  int take = 1e9;
  if(amount>=coins[i]){
     take =  1+ solve(coins,amount-coins[i],i,dp);
  }
  return dp[i][amount] = min(take,not_take);
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(13,vector<int>(amount+1,-1));
        int x =  solve(coins,amount,0,dp);
        if(x==1e9)return -1;
        return x;
    }
};