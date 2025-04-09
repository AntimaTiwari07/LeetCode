class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        bool valid = true;
        int total = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=k){
                valid = false;
                break;
            }
        }
        if(valid == true)return 0;
        for(int i= 0;i<nums.size();i++){
            total+=1;
            mp[nums[i]]++;
        }
        int count = 0;
        int sum = 0;
        for(auto i:mp){
            if(i.first>k){
               sum+=i.second;
               count+=1;
            } 
            if(i.first==k){
                    sum+=i.second;
            }
        }
        if(sum!=total)return -1;
        return count;
    }
};