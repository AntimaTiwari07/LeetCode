class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>sum(nums.size());
        sum[0] = nums[0];
        vector<int>ans;
        for(int i = 1;i<nums.size();i++){
            sum[i] = nums[i]+sum[i-1];
        }
        for(int i =0;i<nums.size();i++){
            int left = 0;int right = 0;
            if(i-1>=0) left = sum[i-1];
            if(i+1<nums.size()) right = sum[nums.size()-1]-sum[i];
            ans.push_back(abs(left-right));
        }
        return ans;
    }
};