class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        int temp = nums[0]+0;
       for(int i = 0;i<=temp;i++){
        if(nums[i]+i >temp){
            temp = nums[i]+i;
        }
        if(temp>=nums.size()-1) return true;
       }
        return false;
    }
};