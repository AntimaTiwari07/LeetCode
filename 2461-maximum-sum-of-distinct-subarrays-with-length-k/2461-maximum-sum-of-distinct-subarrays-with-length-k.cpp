class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        unordered_map<int,int>mp;
        long long maxi = 0;
        int i = 0;
        int j = 0;
        while(j<nums.size()){
            mp[nums[j]]++;
            sum+=nums[j];
            while(i<j && mp[nums[j]]>1){
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
            }
            if((j-i)+1==k){
                maxi = max(maxi,sum);
                mp[nums[i]]--;
                sum-=nums[i];
                i++;
                
            }
            j++;
        }

    return maxi;
    }
};