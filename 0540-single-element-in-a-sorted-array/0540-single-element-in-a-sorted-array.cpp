class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     int st= 0;
     int end = nums.size()-1;
     int mid;
     if(nums.size()==1)return nums[0];
     while(st<=end){
        mid = st+(end-st)/2;
        if(mid%2==0){
             if(nums[mid+1]==nums[mid]){
                st = mid+1;
             }
             else{
                end = mid-1;
             }
        }
        else{
           if( nums[mid-1]==nums[mid]){
                st = mid+1;
             }
             else{
                end = mid-1;
             }
        }
        
        cout<<st<<" "<<end<<endl;
     }
     return nums[st];
    }
};