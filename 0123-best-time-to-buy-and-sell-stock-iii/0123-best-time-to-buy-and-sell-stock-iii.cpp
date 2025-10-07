class Solution {
public:
int solve(vector<int>& prices,int i,int buy,int n,vector<vector<vector<int>>>&dp){
    if(i==prices.size())return 0;
    if(n==0)return 0;
    if(dp[i][buy][n]!=-1)return dp[i][buy][n];
    int profit = INT_MIN;
    if(buy){
        profit = max(-prices[i]+solve(prices,i+1,0,n,dp),solve(prices,i+1,buy,n,dp));
    }
    else profit = max(prices[i]+solve(prices,i+1,1,n-1,dp),solve(prices,i+1,buy,n,dp));
    return dp[i][buy][n] = profit;
}
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        int n = prices.size();
        // jab cap = 0
        for(int i = 0;i<n;i++){
            for(int j = 0;j<=1;j++){
                dp[i][j][0] = 0;
            }
        }
        //jab i = n
        for(int i = 0;i<=1;i++){
            for(int cap = 0;cap<=2;cap++){
                dp[n][i][cap] = 0;
            }
        }

        for(int i = n-1;i>=0;i--){
            for(int buy = 0;buy<=1;buy++){
                for(int cap = 1;cap<=2;cap++){
                    int profit = INT_MIN;
                    if(buy==1){
                profit =  max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
                    }
                    else{
                profit =  max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);        
                    }
                    dp[i][buy][cap] = profit;
                }
            }
        }
        return dp[0][1][2];


    }
};