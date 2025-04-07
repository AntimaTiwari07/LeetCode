class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>dp(nums.size(),1);
        vector<int>prev_idx(nums.size(),-1);
        int maxi = 0;
        int idx = -1;
        for(int i = 1;i<nums.size();i++){
            for(int j = 0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                         prev_idx[i]=j;
                    }
                    if(dp[i]>maxi){
                        maxi = dp[i];
                        idx = i;
                    }
                   
                }
            }
        }
       vector<int>ans;
       int k = idx;
       while(k>=0||k!=-1){
          ans.push_back(nums[k]);
       k = prev_idx[k];
       }
       if(ans.empty()){
        ans.push_back(nums[0]);
        return ans;
       }
       return ans;
       
  return ans;
    }
};