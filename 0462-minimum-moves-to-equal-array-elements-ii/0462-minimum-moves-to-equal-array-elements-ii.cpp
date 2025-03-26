class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt = 0;
        int target = nums[nums.size()/2];
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=target){
                cnt = cnt+ abs(nums[i]-target);
            }
        }
        return cnt;
    }
};