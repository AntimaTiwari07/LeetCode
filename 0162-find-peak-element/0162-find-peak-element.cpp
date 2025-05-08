class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int mid;
        int n = nums.size();
        int ans ;
        if(nums.size()==1)return 0;
        while(st<=end){
            mid = st+(end-st)/2;
            if(mid+1<n && nums[mid+1]<nums[mid] && mid-1>=0 && nums[mid-1]<nums[mid]){
                return mid;
            }
           else if(mid+1<n && nums[mid+1]<nums[mid] && mid-1<0)return mid;
           else if(mid-1>=0 && nums[mid-1]<nums[mid] && mid+1>=n)return mid;
            else if(mid+1<n && nums[mid+1]>nums[mid] || mid-1>=0 && nums[mid-1]<nums[mid]){
                st = mid+1;
            }
            else{
                end = mid;
            }
        }
        return st;
    }
};