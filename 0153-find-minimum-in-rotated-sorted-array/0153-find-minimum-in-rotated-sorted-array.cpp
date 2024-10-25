class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int  mid;
        int ans = -1;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[end]>=nums[start]){
                return nums[start];
            }
            if(nums[mid]>=nums[end]){
              start = mid+1;
            }
            else {
                end = mid;
            }
        }
        return 0;
    }
};