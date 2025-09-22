class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxi = 0;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>maxi){
                maxi = mp[nums[i]];
            }
        }
        int cnt = 0;
        for(auto i:mp){
            if(i.second==maxi)cnt+=1;
        }
        return maxi*cnt;
    }
};