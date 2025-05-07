class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int idx1 = 0;
        int idx2 = 0;
     for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                idx1 = i;
                idx2 = j;
                break;
            }
        }
     }
     return {idx1,idx2};
    }
};
