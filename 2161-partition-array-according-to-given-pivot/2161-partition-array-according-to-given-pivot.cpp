class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
     vector<int>ans(nums.size());
     int cnt = 0;
     int pivot_idx =-1;
 for(int i = 0;i<nums.size();i++){
    if(nums[i]==pivot){ pivot_idx = i;}
        if(nums[i]<=pivot){
            cnt+=1;        
        }
     }   
     ans[cnt-1] = pivot;
     int l = 0;
     int k = cnt-2;
     int j = cnt;
     for(int i = 0;i<nums.size();i++){
        if(i==pivot_idx)continue;
        if(nums[i]<pivot){
            ans[l] = nums[i];
            l++;
        }
        else if(nums[i]>pivot){
            ans[j] = nums[i];
            j++;
        }
        else{
            ans[k] = nums[i];
            k--;
        }
     }
     return ans;
    }
};