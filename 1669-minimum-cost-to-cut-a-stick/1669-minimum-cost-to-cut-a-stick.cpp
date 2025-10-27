class Solution {
public:
int solve(vector<int>& cuts,int st,int end,vector<vector<int>>&dp){
    if(st>end)return 0;
    if(dp[st][end]!=-1)return dp[st][end];
    int mini = INT_MAX;
    for(int i = st;i<=end;i++){
     int cost = (cuts[end+1]-cuts[st-1]) + solve(cuts,st,i-1,dp) + solve(cuts,i+1,end,dp);
     mini = min(mini,cost);
    }
    
    return dp[st][end] = mini;
}
    int minCost(int n, vector<int>& cuts) {
        int size = cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
        vector<vector<int>>dp(cuts.size(),vector<int>(cuts.size(),-1));
        return solve(cuts,1,cuts.size()-2,dp);
    }
};