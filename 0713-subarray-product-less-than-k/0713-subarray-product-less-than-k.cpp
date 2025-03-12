class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i =0;i<nums.size();i++){
            int sum = 1;
            for(int j = i;j<nums.size();j++){
                if(sum*nums[j]<k){
                    sum*=nums[j];
                    cnt+=1;
                }
                else break;;
            }
        }
        return cnt;
    }
};