class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        int mini = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<mini){
            for(int j = i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    diff = max(diff,nums[j]-nums[i]);
                }
            }
        }
        }
        return diff;
    }
};