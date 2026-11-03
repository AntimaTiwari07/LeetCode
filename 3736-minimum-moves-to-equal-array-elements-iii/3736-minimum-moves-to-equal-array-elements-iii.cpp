class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0,n = nums.size();
        for(int i = 0;i<n;i++){
            cnt+=abs(nums[n-1]-nums[i]);
        }
        return cnt;
    }
};