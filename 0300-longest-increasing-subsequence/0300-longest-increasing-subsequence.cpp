class Solution {
public:
int solve(vector<int>& nums,int prev_idx,int curr_idx,vector<vector<int>>&dp){
    if(curr_idx==nums.size())return 0;
     if(dp[prev_idx+1][curr_idx]!=-1)return dp[prev_idx+1][curr_idx];
    int take =0;
    if(prev_idx==-1 || nums[curr_idx]>nums[prev_idx]) take = 1+solve(nums,curr_idx,curr_idx+1,dp);
    int not_take = solve(nums,prev_idx,curr_idx+1,dp);
    return dp[prev_idx+1][curr_idx]=  max(take,not_take);
}
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(nums,-1,0,dp);
    }
};