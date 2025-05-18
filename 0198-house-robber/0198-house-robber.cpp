class Solution {
public:
int solve(vector<int>& nums,int i,vector<int>&dp){
    if(i>=nums.size()){
        //cout<<"maxsum = "<<sum<<endl;
        //maxsum = max(sum,maxsum);
        return 0 ;
    }
    if(dp[i]!=-1)return dp[i];
      int take = nums[i]+solve(nums,i+2,dp);
     int nott = solve(nums,i+1,dp);
    return dp[i] = max(take,nott);
}
    int rob(vector<int>& nums) {
        int ans = 0;
        vector<int>dp(nums.size(),-1);
         return solve(nums,0,dp);
    }
};