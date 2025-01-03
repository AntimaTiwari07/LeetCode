class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      int mini = INT_MAX;
      sort(nums.begin(),nums.end());
      int ans = 0;
      for(int i = 0;i<nums.size()-2;i++){
       int j = i+1;
       int k = nums.size()-1;
       while(j<k){
         if(abs(nums[i]+nums[j]+nums[k]-target)<mini){
                mini = abs(nums[i]+nums[j]+nums[k]-target);
                ans = nums[i]+nums[j]+nums[k];
            }
        if(nums[i]+nums[j]+nums[k]==target){
            return nums[i]+nums[j]+nums[k];
        }
        else if(nums[i]+nums[j]+nums[k]<target){
            j++;
        }
        else{
            k--;
        }
       }
      }
       return ans; 
    }
};