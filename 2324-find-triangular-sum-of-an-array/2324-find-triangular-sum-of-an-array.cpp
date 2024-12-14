class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1) return nums[0];
      while(nums.size()!=1){
        for(int j = 0;j<nums.size()-1;j++){
            nums[j] = (nums[j]+nums[j+1])%10;   
        }
        nums.pop_back();
      }
      return nums[0];
    }
};