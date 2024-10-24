class Solution {
public:
    bool search(vector<int>& nums, int target) {
        /*
       if(nums.size()==1){
        if(nums[0]==target) return true;
        else return false;
       }
        int start =0;
        int end = nums.size()-1;
        int mid;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid-1]>=nums[mid]){//left sorted
               if(target>=nums[start] && target<=nums[mid]){
                end = mid-1;
               }
               else start = mid+1;
            }
            else{//right sorted
              if(target>=nums[mid] && target<=nums[end]){
                start = mid+1;
              }
              else end = mid-1;
            }
        }
        return false;
        */
        for(int i = 0;i<nums.size();i++){
            if(target==nums[i]){
                return true;
            }
        }
        return false;
    }
};