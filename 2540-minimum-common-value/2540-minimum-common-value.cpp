class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }
        int mini = INT_MAX;
        for(int i = 0;i<nums1.size();i++){
            if(mp[nums1[i]]!=0){
                mini = min(mini,nums1[i]);
            }
        }
        if(mini == INT_MAX)return -1;
        return mini;
    }
};