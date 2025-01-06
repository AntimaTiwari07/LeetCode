class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int count = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
       int freq = 0;int temp = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(temp!=nums[i]){
                 temp = nums[i];
                 freq = 1;
            }
            else freq++;
            if(freq>n/3){ans.push_back(nums[i]);freq = -1;}
        }
        return ans;
        
    }
};