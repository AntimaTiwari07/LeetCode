class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int freq = 1;
        int i = 0;
        while(i<nums.size()){
            int j = i+1;
            freq = 1;
            while(j<nums.size()){
               if(nums[i]==nums[j]){
                freq++;
               }
               j++;
            }
            if(freq==1){
                v.push_back(nums[i]);
            }
            i = i +freq;
            }
        return v;
    }
};