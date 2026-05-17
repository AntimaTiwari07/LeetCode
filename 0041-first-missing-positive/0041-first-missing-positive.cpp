class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int pos = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<=0)continue;
             if(nums[i]-pos>1)return pos+1;
             else pos = nums[i];
        }
        return pos+1;
    }
};