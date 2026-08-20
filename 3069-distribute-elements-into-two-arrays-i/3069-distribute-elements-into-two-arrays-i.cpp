class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>one;
        vector<int>two;
        one.push_back(nums[0]);
        two.push_back(nums[1]);
        for(int i = 2;i<nums.size();i++){
            if(one.back()>two.back()){
                one.push_back(nums[i]);
            }
            else{
                two.push_back(nums[i]);
            }
        }
        for(int i = 0;i<two.size();i++){
            one.push_back(two[i]);
        }
        return one;
    }
};