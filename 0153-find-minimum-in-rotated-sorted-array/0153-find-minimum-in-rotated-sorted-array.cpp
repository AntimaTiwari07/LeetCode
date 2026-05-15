class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int end = (nums.size()/2)-1;
        int mid;
        int maxi = 0;
        while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid]>=nums[maxi]){
                maxi = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        st = (nums.size()/2);
        end = nums.size()-1;
        int maxi2= st;
        while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid]>=nums[maxi2]){
                maxi2 = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        if(nums[maxi]<=nums[maxi2])return nums[(maxi2+1)%nums.size()];
        return nums[(maxi+1)%nums.size()];
    }
};