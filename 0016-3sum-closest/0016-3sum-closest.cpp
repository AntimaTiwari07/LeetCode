class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      int mini = INT_MAX;
      sort(nums.begin(),nums.end());
      int ans = 0;
      for(int i = 0;i<nums.size()-2;i++){
       for(int j = i+1;j<nums.size()-1;j++){
        for(int k = j+1;k<nums.size();k++){
           if(abs(nums[i]+nums[j]+nums[k]-target) <mini){
                mini  = abs(nums[i]+nums[j]+nums[k]-target);
                ans = nums[i]+nums[j]+nums[k];
            }
        }
       }
      }
       return ans; 
    }
};