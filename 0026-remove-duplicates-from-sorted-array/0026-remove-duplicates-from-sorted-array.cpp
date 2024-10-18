class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int size = nums.size();
        for(int p = 0;p<size;p++){
        for(int i = 0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    for(int j = i+1;j<nums.size();j++){
                        nums[j-1]=nums[j];
                    }
                    nums.pop_back();
                }
        }
        }
        return nums.size();
    }
};