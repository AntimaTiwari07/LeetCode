class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        int mini = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
            if(nums[i]>mini){
                diff = max(diff,nums[i]-mini);
            }
        }
        return diff;
    }
};