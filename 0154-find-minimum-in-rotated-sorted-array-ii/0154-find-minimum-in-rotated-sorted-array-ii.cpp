class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int mid;
        int idx = 0;
        while(st<=end){
            while( st<end && nums[st]==nums[st+1]) st+=1;
            while(end>st && nums[end]==nums[end-1])end--;
            mid = st+(end-st)/2;
          if(nums[mid]<nums[idx]){
            idx = mid;
          }
          if(nums[mid]>nums[end]){
            st = mid+1;
          }
          else{
            end = mid-1;
          }
        }
       return  nums[idx];
    }
};