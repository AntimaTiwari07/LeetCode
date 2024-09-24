class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                i+=3;
            }
            else{
                break;
            }
        }
        return nums[i];
    }
};