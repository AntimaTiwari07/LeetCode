class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int,int>freq;
        unordered_map<int, vector<long long>> v;
        for(int i = 0;i<nums.size();i++){
            if(v[nums[i]].empty())v[nums[i]].push_back(i);
            else v[nums[i]].push_back(i+v[nums[i]].back());
        }
        vector<long long>ans(nums.size(),0);
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
            vector<long long>&temp = v[nums[i]];
            int left = freq[nums[i]]-1;
            int right = temp.size()- freq[nums[i]];
            long long leftsum = 0;
            long long rightsum = temp[temp.size()-1]-temp[freq[nums[i]]-1];
            if(left>0){
            ans[i] = (long long)left * i - temp[left-1] + (rightsum - (long long)right * i);
            }
            else ans[i] = rightsum - (long long)right * i;;
        }
        return ans;
    }
};