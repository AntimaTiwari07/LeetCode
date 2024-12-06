class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int count = 0;
        int mul = 1;
        int x = nums.size();
        while(2*mul<=x){
            count = 0;
       for(int i = 0;i<nums.size()-1;i++){
        count++;
          if(count%2!=0) {
            //delete max
            if(nums[i]>=nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            else{
                 nums.erase(nums.begin()+i+1);
            } 
       }
       else{
        //delete min
        if(nums[i]<=nums[i+1]){
                nums.erase(nums.begin()+i);
            }
            else{
                 nums.erase(nums.begin()+i+1);
            } 
       }
       }
       mul = 2*mul;
        } 
        return nums[0];
    }
};