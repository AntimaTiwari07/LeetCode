class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        target;
        vector<int>index;
        
        for(int i = 0;i<nums.size();i++){
          int x = i;
            for(int j = i+1;j<nums.size();j++){
                      if((nums[x]+nums[j])==target){
                             index.push_back(j);
                     index.push_back(x);
                      }
            }
        }
        return index;
    }
};