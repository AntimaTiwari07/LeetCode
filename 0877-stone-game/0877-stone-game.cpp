class Solution {
public:
int solve(vector<int>& piles,int i,int j,vector<vector<int>>&dp){
    if(i>j)return 0;
    if(i==j)return piles[i];
    if(dp[i][j]!=-1)return dp[i][j];
    int take_i = piles[i]+min(solve(piles,i+2,j,dp),solve(piles,i+1,j-1,dp));
    int take_j = piles[j]+min(solve(piles,i+1,j-1,dp),solve(piles,i,j-2,dp));
    return dp[i][j] = max(take_i,take_j);
}
    bool stoneGame(vector<int>& piles) {
        vector<vector<int>>dp(piles.size()+1,vector<int>(piles.size()+1,-1));
        int sum = 0;
        for(int i = 0;i<piles.size();i++){
            sum+=piles[i];
        }
        int p1 = solve(piles,0,piles.size()-1,dp);
        int p2 = sum-p1;
        if(p1>=p2)return true;
        return false;
    }
};