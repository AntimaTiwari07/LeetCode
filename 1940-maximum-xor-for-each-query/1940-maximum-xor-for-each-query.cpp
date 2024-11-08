class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>v;
        int n = nums.size();
        vector<int>prefix;
       prefix.push_back(nums[0]);
        for(int i = 1;i<n;i++){
            prefix.push_back(nums[i]^prefix[i-1]);
        }
        for(int i = 0;i<prefix.size();i++){
            cout<<prefix[i]<<" ";
        }
        int k = pow(2,maximumBit)-1;
        for(int i = 0;i<n;i++){
            v.push_back(prefix[i]^k);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};