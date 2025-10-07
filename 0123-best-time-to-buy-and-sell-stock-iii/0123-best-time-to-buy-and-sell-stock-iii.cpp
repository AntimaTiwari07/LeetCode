class Solution {
public:
//this solution is based on transition no , even means buy and odd means sell b,s,b,s
int f(vector<int>& prices,int i,int tran,vector<vector<int>>&dp){
    if(i==prices.size())return 0;
    if(tran==4)return 0;
    if(dp[i][tran]!=-1)return dp[i][tran];
    int profit = INT_MIN;
    if(tran%2==0){
        profit = max(-prices[i]+f(prices,i+1,tran+1,dp),f(prices,i+1,tran,dp));
    }
    else profit = max(prices[i]+f(prices,i+1,tran+1,dp),f(prices,i+1,tran,dp));
    return dp[i][tran] = profit;
}
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>dp(prices.size()+1,vector<int>(5,0));
        int n = prices.size();
        for(int tran = 0;tran<4;tran++){
            dp[n][tran] = 0;
        }
        for(int i = n-1;i>=0;i--){
            for(int tran = 3;tran>=0;tran--){
              int profit = INT_MIN;
    if(tran%2==0){
        profit = max(-prices[i]+dp[i+1][tran+1],dp[i+1][tran]);
    }
    else profit = max(prices[i]+dp[i+1][tran+1],dp[i+1][tran]);
    dp[i][tran] = profit;
            }
        }
        return dp[0][0];
    }
};