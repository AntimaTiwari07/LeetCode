class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long  i=0;
        long long j = 1;
        long long sc  = 0;
       while((j<nums.size())){
        if(j==nums.size()-1) sc = sc +(nums.size()-1-i)*nums[i];
       else if(nums[j]>nums[i]){
            sc = sc + ((j-i)*(nums[i]));
         i=j;
        }
        j++;
       }

        return sc;
    }
};