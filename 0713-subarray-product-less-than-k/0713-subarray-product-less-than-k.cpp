class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i =0;i<nums.size();i++){
            long long sum = 1;
            for(int j = i;j<nums.size();j++){
                sum*=nums[j];
                if(sum<k)cnt+=1;
            }
        }
        return cnt;
    }
};