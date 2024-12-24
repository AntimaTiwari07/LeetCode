class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        for(int i = 0;i<nums.size();i++){
            bool valid = false;
        for(int j = 1;j<nums[i];j++){
            if((j|(j+1))==nums[i]){
                ans[i]= j;
                valid = true;
                break;
            }
        }
        if(!valid)ans[i] =-1;
        }
        return ans;
    }
};