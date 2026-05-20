class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int prod= 1;
      int zero = 0;
      bool val= false;
      for(int i = 0;i<nums.size();i++){
       if(nums[i]!=0){ prod *=  nums[i];val = true;}
       else {zero +=1;}
      }  
      vector<int>ans(nums.size());
     for(int i = 0;i<nums.size();i++){
        if(nums[i]!=0 && zero>=1){ans[i] = 0;}
       else if(!val)ans[i] =0;
       else if(zero>1 && nums[i]==0) ans[i] = 0;
       else if(zero==1 && nums[i]==0)ans[i] = prod;
        else ans[i] = prod/nums[i];
     }
     return ans;
    }
};