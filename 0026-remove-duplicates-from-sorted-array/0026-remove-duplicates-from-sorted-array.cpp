class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int val = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[l] = val;
                val = nums[i];
                l++;
            }
        }
        nums[l] = val;
        return l+1;
    }
};