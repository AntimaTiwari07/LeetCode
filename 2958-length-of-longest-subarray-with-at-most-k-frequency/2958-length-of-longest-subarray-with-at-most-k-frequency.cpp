class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int cnt = 0;
        int ans = INT_MIN;
        int j = 0;
        int i = 0;
        while(j<nums.size() && i<nums.size()){
            mp[nums[j]]++;
            if(mp[nums[j]]>k){
                while(mp[nums[j]]>k){
                    mp[nums[i]]-=1;
                    i++;
                    cnt-=1;
                }
            }
            j++;
            cnt+=1;
            ans = max(ans,cnt);
        }
        ans = max(ans,cnt);
        return ans; 
    }
};