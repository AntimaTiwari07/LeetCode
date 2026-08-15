class Solution {
public:
int solve(vector<int>& nums,int i,int x,vector<vector<int>>&dp){
    if(i>=nums.size()){
        if(x!=0)return 0;
        return INT_MIN;
    }
   
    if(dp[i][x]!=-1)return dp[i][x];
    int take = 1+solve(nums,i+1,x^nums[i],dp);
    int not_take = solve(nums,i+1,x,dp);
     return dp[i][x] =  max(take,not_take);
}
    int longestSubsequence(vector<int>& nums) {
        // int maxi =0;
        // for(int i = 0;i<nums.size();i++){
        //     maxi = max({maxi,maxi^nums[i],nums[i]});
        // }
        // vector<vector<int>>dp(nums.size()+1,vector<int>(maxi+1,-1));
        //return solve(nums,0,0,dp);
        bool flag = false;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0){flag = true;break;}
        }
        if(flag==false)return 0;
        int xorr = 0;
        for(int i= 0;i<nums.size();i++){
            xorr = (xorr^nums[i]);
        }
        if(xorr!=0)return nums.size();
         return nums.size()-1;
    }
};