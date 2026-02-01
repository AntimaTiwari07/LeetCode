class Solution {
public:
    int minimumCost(vector<int>& nums) {
       int ans = nums[0];
        int idx = -1;
        int mini = INT_MAX;
        for(int i = 1;i<nums.size();i++){
          if(nums[i]<mini){
            mini = nums[i];
            idx = i;
          }
        }
        mini = INT_MAX;
        ans+=nums[idx];
        int idx2 = -1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]<mini && i!=idx){
                mini = nums[i];
                idx2= i;
            }
        }
        ans+=nums[idx2];
        return ans;

    }
};