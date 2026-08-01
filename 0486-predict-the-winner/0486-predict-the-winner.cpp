class Solution {
public:
int solve(vector<int>& nums,int i,int j,vector<vector<int>>&dp){
    if(i>j)return 0;
    if(i==j)return nums[i];
    if(dp[i][j]!=-1)return dp[i][j];
    int take_i = nums[i]+min(solve(nums,i+2,j,dp),solve(nums,i+1,j-1,dp));
    int take_j = nums[j]+min(solve(nums,i+1,j-1,dp),solve(nums,i,j-2,dp));
    return dp[i][j] = max(take_i,take_j);
}
    bool predictTheWinner(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        int p1 = solve(nums,0,nums.size()-1,dp);
        int p2 = sum-p1;
        if(p1>=p2)return true;
        return false;
    }
};