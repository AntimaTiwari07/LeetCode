class Solution {
public:
   bool minimumPanelty(int mid,vector<int>& nums,int maxOperations){
    int totalop = 0;
    for(int i = 0;i<nums.size();i++){      
            int count = nums[i]/mid;
            if(nums[i]%mid==0){
                count-=1;
            }  
            totalop+=count;   
    }
     if(totalop>maxOperations){
        return false;
     }
    return true;
   }
    int minimumSize(vector<int>& nums, int maxOperations) {
        sort(nums.begin(),nums.end());
        int st = 1;
        int end = nums[nums.size()-1];
        int mid ;
        int ans = 0;
        while(st<=end){
            mid = st+(end-st)/2;
            if(minimumPanelty(mid,nums,maxOperations)){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};