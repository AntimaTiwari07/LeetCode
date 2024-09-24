class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int i = 1;
        while(i<nums.size()){     
           if(nums[i-1]!=nums[i]){
                 v.push_back(nums[i-1]);
                 i++;
                 continue;
               }
            i = i+2;
            }
            if(v.size()==1){
                v.push_back(nums[nums.size()-1]);
            }
        return v;
    }
};