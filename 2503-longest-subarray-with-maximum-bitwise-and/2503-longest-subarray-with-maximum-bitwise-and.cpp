class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m = INT_MIN;
        int maxcount = 0;
for(int i = 0;i<nums.size();i++){
  if(nums[i]>m)
    m = nums[i];
}
        int count = 0;
        for(int i = 0;i<nums.size();i++){
          if(nums[i]==m){
            count++;
            maxcount = max(count,maxcount);
          }
          else{
            count = 0;
          }
        }
        return maxcount;
    }

};