class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        if(2*k+1>=nums.size())return nums.size();
 sort(nums.begin(),nums.end());
 if(k!=0){
    nums[0]-=k;
 int maaxi = nums[0];
       for(int i = 1;i<nums.size();i++){
       for(int j = max(nums[i]-k,maaxi+1);j<=nums[i]+k;j++){
         bool valid = true;
         int st = 0;
         int end = i-1;
         while(st<end){
            int mid = st+(end-st)/2;
            if(nums[mid]==j){
                valid = false;
                break;
            }
            else if(nums[mid]<j){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
         }
          if(valid){
        nums[i] = j;
        if(maaxi<nums[i]) {maaxi= nums[i];}
        break;
       }  
    }
 }
}
 sort(nums.begin(),nums.end());
    int c=0;
 for(int i = 0;i<nums.size()-1;i++){
    if(nums[i]==nums[i+1]) c++;
 }
       return nums.size()-c;
    }
};