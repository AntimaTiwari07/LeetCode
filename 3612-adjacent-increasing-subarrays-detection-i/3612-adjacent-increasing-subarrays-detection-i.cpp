class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(nums.size()==2){
           return true;
        }
        if(k==1)return true;
        for(int i = 0;i<nums.size()-k;i++){
            bool valid1 = false;
             bool valid2 = false;
            for(int j = i;j<i+k-1;j++){
                if(nums[j]>=nums[j+1]){valid1 = false;break;}
                else valid1 = true;
            }
            if(valid1 && (nums.size()-1)-(i+k)+1>=k){
            for(int j = i+k;j<nums.size()-1&&j<i+2*k-1 ;j++){
                if(nums[j]>=nums[j+1]) {valid2 = false;break;}
                else valid2 = true;
            }
            }
            if(valid1 && valid2)return true;
        }
        return false;
    }
};