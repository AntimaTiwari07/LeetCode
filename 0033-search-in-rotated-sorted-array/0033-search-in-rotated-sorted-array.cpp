class Solution {
public:
    int search(vector<int>& nums, int target) {
   int st  = 0;
   int end = nums.size()-1;
   int mini = nums[st];
   int mid;
   int idx = 0;
   while(st<=end){
    mid = st+(end-st)/2;
    if(nums[mid]<mini){
        idx = mid;
        end = mid-1;
    }
    else{
        st = mid+1;
    }
   }
   cout<<idx<<endl; 
   if(idx-1>=0 && target>=nums[0] && target<=nums[idx-1]) {
    st = 0;
    end = idx-1;
   }
   else if(target>=nums[idx] && target<=nums[nums.size()-1]){
    st  =idx;
    end = nums.size()-1;
   }
   else return -1;
   while(st<=end){
    mid = st+(end-st)/2;
    if(nums[mid]==target)return mid;
    else if(nums[mid]<target){
        st = mid+1;
    }
    else{
        end = mid-1;
    }
   }
return -1;
    }
};