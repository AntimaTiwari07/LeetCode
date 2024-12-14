class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
             int n = nums.size();
        long long ans = 0;
        int i = 0;
        int max = nums[0], min = nums[0];
        for (int j = 0; j < n; ++j) {
            if (max < nums[j])
                max = nums[j];
            if (min > nums[j])
                min = nums[j];
            while (max - min > 2) {
                ++i;
                max = nums[i], min = nums[i];
                for (int k = i; k <= j; k++) {
                    if (max < nums[k])
                        max = nums[k];
                    if (min > nums[k])
                        min = nums[k];
                }
            }
            ans += (j - i + 1);
        }
        return ans;
    }
};