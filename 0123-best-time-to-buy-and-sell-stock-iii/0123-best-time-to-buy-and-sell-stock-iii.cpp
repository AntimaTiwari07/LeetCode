class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>>after(2,vector<int>(3,0));
        vector<vector<int>>curr(2,vector<int>(3,0));
 int n = prices.size();
        for(int i = n-1;i>=0;i--){
            for(int buy = 0;buy<=1;buy++){
                for(int cap = 1;cap<=2;cap++){
                    int profit = INT_MIN;
                    if(buy==1){
                profit =  max(-prices[i]+after[0][cap],after[1][cap]);
                    }
                    else{
                profit =  max(prices[i]+after[1][cap-1],after[0][cap]);        
                    }
                    curr[buy][cap] = profit;
                }
            }
            after = curr;
        }
        return after[1][2];


    }
};