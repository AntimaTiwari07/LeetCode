class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int i = 0;
       while(i<nums.size()-1){
        if(nums[i]!=nums[i+1]){
            nums.erase(nums.begin()+i);
            i--;
        }
            i++;
        }
        nums.pop_back();
        return nums;
    }
};