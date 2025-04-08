class Solution {
public:
bool solve(vector<int>&nums,int sum,int i,int target,vector<vector<int>>&dp){
    if(sum==target){
        return true;
    }
   
     if(i==nums.size()){
        return false;
     }
      if(dp[i][sum]!=-1){
        return dp[i][sum];
     }
     bool take;
if(sum<=target)
     take =  solve(nums,sum+nums[i],i+1,target,dp);

     bool not_take = solve(nums,sum,i+1,target,dp);

     return dp[i][sum]= (take||not_take);
}
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for(int i = 0;i<nums.size();i++){
            total+=nums[i];
        }
        if(total%2!=0)return false;
        int target = total/2;
        vector<vector<int>>dp(201,vector<int>(20001,-1));
        return solve(nums,0,0,target,dp);
    }
};