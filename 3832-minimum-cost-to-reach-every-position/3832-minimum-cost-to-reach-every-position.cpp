class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        int mini = cost[0];
        vector<int>ans(cost.size(),0);
        ans[0]=cost[0];
        for(int i = 1;i<cost.size();i++){
            if(cost[i]<mini){
                mini = cost[i];
            }
            ans[i]= mini;
        }
        return ans;
    }
};