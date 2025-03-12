class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j =0;
        int sum = 0;
        int size= INT_MAX;
        while(i<nums.size() && j<nums.size()){
            sum+=nums[j];
            if(sum>=target){
                size = min(size,j-i+1);
                while(sum-nums[i]>=target){
                    sum-=nums[i];
                    i++;
                     size = min(size,j-i+1);
                }
            }
            j++;
        }
        if(size==INT_MAX)return 0;
        return size;
    }
};