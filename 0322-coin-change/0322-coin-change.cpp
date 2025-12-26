class Solution {
public:
int s(vector<int>& coins, int amount,int i,vector<vector<int>>&dp){
    if(i==coins.size())return 1e9 ;
    if(amount==0)return 0;
    if(dp[i][amount]!=-1)return dp[i][amount];
    int take = 1e9;
    int nottake = s(coins,amount,i+1,dp);
    if(amount>=coins[i]){
        take = 1+s(coins,amount-coins[i],i,dp);
    }
    return dp[i][amount] = min(take,nottake);
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(13,vector<int>(amount+1,-1));
        int x =  s(coins,amount,0,dp);
        if(x==1e9)return -1;
        return x;
    }
};