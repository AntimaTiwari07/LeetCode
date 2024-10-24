class Solution {
public:
int binary(vector<int>& nums, int target,int start,int end){
         int mid;
        while(start<=end){
            mid = start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
}

    int search(vector<int>& nums, int target) {
        int mini = INT_MAX;
        int min_idx = -1;
       for(int i = 0;i<nums.size();i++){
           if(nums[i]<mini){
            mini  = nums[i];
            min_idx = i;
           }    
       }
       if(target==nums[min_idx]){
        return min_idx;
       }
       else if(target>nums[nums.size()-1]){
       min_idx = binary(nums,target,0,min_idx-1);
       }
       else{
        min_idx = binary(nums,target,min_idx,nums.size()-1);
       }
       return min_idx;
     
       }
};