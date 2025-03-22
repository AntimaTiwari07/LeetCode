class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool lexo =true;
        int n = nums.size();
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                lexo = false;
                break;
            }
        }
        if( nums.size()>1 && lexo){
          swap(nums[n-2],nums[n-1]);
        }
        else{
            int idx = 0;
            int i = n-1;
           while(i>0){
            if(nums[i]<=nums[i-1]){
               i--;
            }
            else {
                idx = i-1;
                break;
            }
           }
           int minnum = INT_MAX;
           int index = n-1;
           for(int j = idx+1;j<n;j++){
            if(nums[j]>nums[idx]){
                minnum = min(nums[j],minnum);
                index = j;
            }
           }
           cout<<minnum<<endl;
           swap(nums[idx],nums[index]);
           for(int i = 0;i<nums.size();i++)cout<<nums[i]<<" ";
           for(int i = idx+1;i<n-1;i++){
               for(int j = n-1;j>=i+1;j--){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
               }
           }

        }
    }
};