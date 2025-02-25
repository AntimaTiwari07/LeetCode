class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increase = true;
        bool decrease = true;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                increase= false;
                break;
            }
        }
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                decrease= false;
                break;
            }
        }
        if(increase||decrease)return true;
        return false;
    }
};