class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>mp;
   for(int i = 0;i<nums.size();i++){
    mp[nums[i]]++;
   }
   int cnt = 0;
   int ans = INT_MIN;
   int val ;
   for(auto i:mp){
    if(cnt==0){
      val = i.first;
      cnt+=1;
    }
    if(i.first-val==1){
        cnt+=1;
        val = i.first;
    }
    else{
        ans = max(ans,cnt);
        cnt = 1;
        val = i.first;
    }
   }
   ans = max(ans,cnt);
   return ans;
    }
};