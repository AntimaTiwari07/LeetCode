class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mincost = prices[0];
        int profit = 0;
        for(int i = 1;i<prices.size();i++){
            if(prices[i]<mincost){
                mincost  = prices[i];
            }
            if(prices[i]>mincost){
                profit = max(profit,prices[i]-mincost);
            }
        }
        return profit;
    }
};