class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int mid;
        int mini = INT_MAX;
        while(st<=end){
            while(st+1<nums.size() && nums[st]==nums[st+1])st+=1;
            while(end-1>=0 && nums[end]==nums[end-1])end-=1;
            mid = st+(end-st)/2;
            if(nums[mid]<mini){
                mini = nums[mid];
            }
            if(nums[mid]<nums[end]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return mini;
    }
};