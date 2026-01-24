class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = INT_MIN;
        int n = nums.size()-1;
        for(int i = 0;i<nums.size()/2;i++){
            ans = max(ans,nums[i]+nums[n-i]);
        }
        return ans;
    }
};