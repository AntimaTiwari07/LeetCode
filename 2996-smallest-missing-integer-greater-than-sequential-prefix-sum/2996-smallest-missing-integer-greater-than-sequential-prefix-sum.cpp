class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int seq = nums[0];
        int cnt = 1;
        int sum = nums[0];
        int ans =  INT_MAX;
        for(int i = 1;i<nums.size();i++){
           if(nums[i]==seq+1){
            cnt+=1;
            seq= nums[i];
            sum+=nums[i];
           }
           else{
            break;
           }
        }
        while(mp.find(sum)!=mp.end()){
              sum+=1;
            }
            ans = min(ans,sum);
            
        return ans;
    }
};