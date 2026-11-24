class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = INT_MIN;
        
       for(int i = 0;i<nums.size();i++){
        long long lcmm = 1,gcdd=nums[i],prod =1;
        for(int j = i;j<nums.size();j++){
            lcmm = lcm(lcmm,nums[j]);
            gcdd = gcd(gcdd,nums[j]);
            if(prod*nums[j]<=lcmm*gcdd){
                prod = (long long)(prod)*nums[j];
            }
            else break;
            if(prod==lcmm*gcdd)ans = max(ans,j-i+1);
        }
       }
       return ans;
    }
};