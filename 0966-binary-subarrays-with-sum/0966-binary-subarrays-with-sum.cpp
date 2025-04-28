class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
     int i = 0;
     int j = 0;
     int n = nums.size();
     int sum = 0;
     int count = 0;
     while(i<n && j<n){
         sum+=nums[j];
       while(sum>goal){
        sum-=nums[i];
        i++;
       }
        count+=(j-i+1);
       j++;
     } 
     i = 0;
     j = 0;
     int countm1 =0;
     goal--;
     sum= 0;
     if(goal<0)return count;
        while(i<n && j<n){
         sum+=nums[j];
       while(sum>goal){
        sum-=nums[i];
        i++;
       }
        countm1+=(j-i+1);
       j++;
     } 
     return count-countm1;
    }
};