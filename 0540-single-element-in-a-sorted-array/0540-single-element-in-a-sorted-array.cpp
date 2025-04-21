class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int ans = 0;
       for(int i = 0;i<nums.size();i++){
         bool left=false,right=false;
        if(i-1>=0 && nums[i]==nums[i-1]){
            left = true;
        }
        if(i+1<nums.size() && nums[i]==nums[i+1]){
            right = true;
        }
        if(!left && !right){
            ans = nums[i];
            break;
        }
       }
       return ans;
    }
};