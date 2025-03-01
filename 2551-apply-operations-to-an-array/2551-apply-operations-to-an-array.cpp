class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
      for(int i =0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i]= 2*nums[i];
            nums[i+1]=0;
        }
      }  
      int count =0;
      for(int i = 0;i<nums.size();i++){
        if(nums[i]==0){
            count+=1;
            nums.erase(nums.begin()+i);
            i--;
      }
      }
      for(int i = 1;i<=count;i++){
        nums.push_back(0);
      }
      return nums;
    }
};