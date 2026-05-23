class Solution {
public:
bool sorted(vector<int>&nums){
    for(int i =0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1])return false;
    }
    return true;
}
    bool check(vector<int>& nums) {
        if(sorted(nums))return true;
        for(int i = 0;i<nums.size()-1;i++){
            int last = nums[nums.size()-1];
            nums.pop_back();
            vector<int>v;
            v.push_back(last);
            for(int j = 0;j<nums.size();j++){
                v.push_back(nums[j]);
            }
            if(sorted(v))return true;
            nums = v;
        }
        return false;
    }
};