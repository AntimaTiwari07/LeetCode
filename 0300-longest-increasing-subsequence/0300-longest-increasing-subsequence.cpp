class Solution {
public:
int solve(vector<int>&nums,int prev_idx,int idx,vector<vector<int>>&dp){
    if(idx==nums.size()){
        return 0;
    }
    if(dp[idx][prev_idx+1]!=-1)return dp[idx][prev_idx+1];
    int not_take = solve(nums,prev_idx,idx+1,dp);
    int take;
    if(prev_idx==-1 || nums[idx]>nums[prev_idx]){
     take = 1+ solve(nums,idx,idx+1,dp);
    }
    return dp[idx][prev_idx+1] = max(take,not_take);
}
    int lengthOfLIS(vector<int>& nums) {
       vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(nums,-1,0,dp);
    }
};