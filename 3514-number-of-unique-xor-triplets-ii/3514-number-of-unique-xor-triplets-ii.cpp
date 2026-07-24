class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
    
     unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            for(int j = i;j<nums.size();j++){
                int x = (nums[j]^nums[i]);
               mp[x]++;
            }
        }
unordered_map<int,int>sec;
        for(auto i:mp){
            for(int j = 0;j<nums.size();j++){
                int temp = (i.first^nums[j]);
             
               sec[temp]++;
            }
        }
        return sec.size();
    }
};