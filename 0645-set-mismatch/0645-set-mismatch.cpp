class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>missing;
        int duplicate = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                duplicate = nums[i];
                  missing.push_back(nums[i]);
                  break;
            }
        }
       int sum = 0;
       for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
       }
       int total_sum  = nums.size()*(nums.size()+1)/2;
       missing.push_back((total_sum - sum )+duplicate);

        return missing;

    }
};