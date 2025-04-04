class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
      long long maxdiff = 0;
      long long maxi = 0;
      long long ans = 0;
      for(int k = 0;k<nums.size();k++){
         ans = max(ans,maxdiff*nums[k]);
         maxdiff = max(maxdiff,maxi-nums[k]);
         maxi = max(maxi,(long long)nums[k]);
      }
      return ans;
    }
};