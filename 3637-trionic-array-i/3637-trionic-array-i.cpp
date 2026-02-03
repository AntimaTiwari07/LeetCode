class Solution {
public:
    bool isTrionic(vector<int>& nums) {
            int j = -1;
            for(j = 0;j<nums.size()-1;j++){
                if(nums[j]>nums[j+1])break;
                else if(nums[j]==nums[j+1])return false;
            } 
            if(j==nums.size()-1 || j==0)return false;
            int k;
            for(k = j;k<nums.size()-1;k++){
                if(nums[k]==nums[k+1])return false;
                else if(nums[k]<nums[k+1])break;
            }
            if(k==nums.size()-1 || j==k)return false;
            int l =-1 ;
            for(l = k;l<nums.size()-1;l++){
                if(nums[l]>=nums[l+1])return false;
            }
           return true;
    }
};