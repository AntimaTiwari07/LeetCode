class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>distinct;
        for(int i=0;i<nums.size();i++){
            distinct[nums[i]]++;
        }
        int dis_ele = distinct.size();
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            for(int j = i;j<nums.size();j++){
                mp[nums[j]]++;
                if(mp.size()==dis_ele)cnt+=1;
            }
        }
   return cnt;
    }
};