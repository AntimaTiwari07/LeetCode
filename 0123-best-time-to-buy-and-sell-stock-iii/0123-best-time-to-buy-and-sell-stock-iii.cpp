class Solution {
public:
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
        vector<vector<int>>dp(prices.size(),vector<int>(4,-1));
        return f(prices,0,0,dp);
    }
};