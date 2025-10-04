class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j = 0;
        int sum = 0;
        int idx = -1;
        for(int i = 1;i<prices.size();i++){
            if(prices[i]<prices[i-1]){
                idx = i;
                int mini = prices[j];
                int profit = 0;
                while(j<i){
                    mini = min(mini,prices[j]);
                    if(prices[j]>mini){
                        profit = max(profit,prices[j]-mini);
                    }
                    j++;
                }
                j = idx;          
                sum+=profit;
            }
        }
         int mini = prices[j];
            int profit = 0;
                while(j<prices.size()){
                    mini = min(mini,prices[j]);
                    if(prices[j]>mini){
                        profit = max(profit,prices[j]-mini);
                    }
                    j++;
                }
                      
                sum+=profit;
        return sum;
    }
};