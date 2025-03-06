class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       vector<int>v(nums.size());
       int cnt =0;
       int dup = 0;
       for(int i = 0;i<nums.size();i++){
        if(nums[i]<pivot)cnt+=1;
        else if(nums[i]==pivot)dup+=1;
       } 
       int k = cnt+(dup-1)+1;
       int s = 0;
       for(int i = 0;i<nums.size();i++){
         if(nums[i]<pivot){v[s]=nums[i];s++;}
         else if(nums[i]>pivot){
            v[k]=nums[i];
            k++;
         }
       }
       for(int i =0;i<dup;i++){
        v[cnt] = pivot;
        cnt+=1;
       }
       return v;
    }
};