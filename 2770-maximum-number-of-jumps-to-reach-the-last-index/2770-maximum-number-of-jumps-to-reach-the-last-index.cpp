class Solution {
public:
  int f(vector<int>& nums, int target,int idx,vector<int>&dp){
    if(idx==nums.size()-1)return 0;
    if(idx>=nums.size()) return INT_MIN;
    if(dp[idx]!=-1)return dp[idx];
      int ans = INT_MIN;
    for(int j = idx+1;j<nums.size();j++){
       if(nums[j]-nums[idx]<=target && nums[j]-nums[idx]>=-target){
        ans = max(ans,1+f(nums,target,j,dp));
       }
    }
    return dp[idx] = ans;
  }
    int maximumJumps(vector<int>& nums, int target) {
        vector<int>dp(nums.size(),-1);
        int x = f(nums,target,0,dp);
        if(x<=0)return -1;
        return x;
    }
};