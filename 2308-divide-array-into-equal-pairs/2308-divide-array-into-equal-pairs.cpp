class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int pair = 0;
        for(auto i:mp){
            if(i.second%2!=0)return false;
            else if(i.second%2==0){
                pair+=(i.second)/2;
            }
        }
          if(pair==nums.size()/2)return true;
          return false;
    }
};