class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int>result;
       for(int i = 0;i<nums.size();i++){
          //move foreward
          if(nums[i]>0){
            int idx = (i+nums[i]) % nums.size();
            result.push_back(nums[idx]);
          }
          else if(nums[i]<0){
            int idx1 = i+nums[i];
            //next level thing seen from rishab code
            while(idx1<0) idx1+=nums.size();
            result.push_back(nums[idx1]);
          }
          else{
            result.push_back(nums[i]);
          }
       } 
       return result;
    }
};