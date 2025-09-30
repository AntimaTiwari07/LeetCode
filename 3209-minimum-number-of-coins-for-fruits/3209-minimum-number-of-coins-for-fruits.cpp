class Solution {
public:
int solve(vector<int>& prices,int i,vector<int>&dp){
     if(i>=prices.size())return 0;
     if(dp[i]!=-1)return dp[i];
     int ans = INT_MAX;
     for(int j = i+1;j<=(i+(i+1)+1);j++){
        ans = min(ans,solve(prices,j,dp));
     }
     return dp[i] = ans+prices[i];
}
    int minimumCoins(vector<int>& prices) {
        vector<int>dp(1001,-1);
        return solve(prices,0,dp);
    }
};