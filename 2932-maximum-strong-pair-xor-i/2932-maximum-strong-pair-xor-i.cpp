class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            for(int j = i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                maxi = max(maxi,(nums[i]^nums[j]));
            }
        }
        return maxi;
    }
};