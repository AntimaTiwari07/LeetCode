class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int l = 0;
       int cnt = 0;
       int val = nums[l];
       for(int r = 0;r<nums.size();r++){
         if(nums[r]==val){
            cnt++;
            if(cnt<=2){
                nums[l] = val;
                l++;
            }  
         }
         else{
            cnt = 1;
            val = nums[r];
            nums[l] = val;
            l++;
         }
       } 
       return l;
    }
};