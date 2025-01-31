class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>v;
        int n = nums.size();
        vector<int>prefix;
             int k = pow(2,maximumBit)-1;
       prefix.push_back(nums[0]);
        v.push_back(prefix[0]^k);
        for(int i = 1;i<n;i++){
            prefix.push_back(nums[i]^prefix[i-1]);
             v.push_back(prefix[i]^k);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};