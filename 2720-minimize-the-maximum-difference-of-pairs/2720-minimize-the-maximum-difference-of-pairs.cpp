class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int st = 0;
        int end = nums[nums.size()-1]-nums[0];
        int mid;
        while(st<=end){
         mid = st+(end-st)/2;
         int i = 0;
         int count = 0;
         while(i<nums.size()-1){
            if(abs(nums[i]-nums[i+1])<=mid){
                count+=1;
                i+=2;
            }
            else{
                i+=1;
            }
         }
         if(count>=p){
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