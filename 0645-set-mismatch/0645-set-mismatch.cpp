class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>missing;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                  missing.push_back(nums[i]);
                  break;
            }
        }
        vector<int>count(nums.size()+1,0);
        for(int i  = 0;i<nums.size();i++){
           count[nums[i]]++;
        }
        for(int i = 1;i<=nums.size();i++){
            if(count[i]==0){
                missing.push_back(i);
            }
        }
        return missing;

    }
};