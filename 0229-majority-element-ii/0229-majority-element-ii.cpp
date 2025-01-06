class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int n= nums.size();
        for(auto i:freq){
            if(i.second>n/3){
            ans.push_back(i.first);
            }
        }
        return ans;
    }
};