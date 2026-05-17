class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2])return nums.size()-1;
        int st = 1;
        int end = nums.size()-2;
        int mid;
        int n = nums.size();
        while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])return mid;
            else if(nums[mid]>nums[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};