class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        vector<int>v;
        vector<int>freq;
        v.push_back(nums[0]);
        for(int i = 1;i<nums.size();i++){
            if(nums[i]!=v.back()) v.push_back(nums[i]);
        }
        for(int i = 0;i<v.size();i++){
            int count = 0;
            for(int j = 0;j<nums.size();j++){
                if(v[i]==nums[j])count++;
            }
            freq.push_back(count);
        }
        vector<int>ans;
        for(int j = 0;j<v.size();j++){
            int mini = INT_MAX;
            int idx = 0;
        for(int i = 0;i<freq.size();i++){
            if(freq[i]<mini){
                mini = freq[i];
                idx = i;
            }
        }
        for(int i = 1;i<=mini;i++){
             ans.push_back(v[idx]);
        }
        freq[idx]= INT_MAX;
        }
        return ans;
    }
};