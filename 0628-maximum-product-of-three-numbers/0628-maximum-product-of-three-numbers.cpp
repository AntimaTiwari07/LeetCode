class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int maxi = INT_MIN;
        int pos = 1;
        return max(nums[0]*nums[1]*nums[2],nums[nums.size()-1]*nums[nums.size()-2]*nums[0]);
    }
};