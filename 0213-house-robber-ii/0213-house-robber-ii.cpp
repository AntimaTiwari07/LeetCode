class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        vector<int>dp(nums.size()-1);
        dp[0] = nums[0];
        
        dp[1] = nums[1];
        for(int i = 2;i<nums.size()-1;i++){
            int maxi = 0;
            for(int j = 0;j<i-1;j++){
                maxi = max(maxi,dp[j]);
            }
            dp[i] = maxi+nums[i];
        }
        //remove last number
        int first = max(dp[dp.size()-1],dp[dp.size()-2]);

        dp[0]= nums[1];
        dp[1] = nums[2];
         for(int i = 3;i<nums.size();i++){
            int maxi = 0;
            for(int j = 0;j<i-2;j++){
                maxi = max(maxi,dp[j]);
            }
            dp[i-1] = maxi+nums[i];
        }
        //remove first element
        int last = max(dp[dp.size()-1],dp[dp.size()-2]);
        return max(first,last);
    }
};