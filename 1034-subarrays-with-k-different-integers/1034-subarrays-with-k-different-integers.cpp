class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //no. of subarray with k distinct ele = no.of subarray with atmost k distinct le - no.of subarray with atmost(k-1) distinct subarray

      //cnt subarray with atmost k distinct ele 
      int cnt_k = 0;
      int i = 0;
      int j = 0;
      int n = nums.size();
      unordered_map<int,int>mp;
      while(i<n && j<n){
         mp[nums[j]]++;
         
        while(mp.size()>k){
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        if(mp.size()<=k){
            cnt_k+= (j-i+1);
        }
         j++;
      }
      i = 0;
      j = 0;
      int cnt_km1 = 0;
       unordered_map<int,int>mp2;
      while(i<n && j<n){
          mp2[nums[j]]++;
        while(mp2.size()>(k-1)){
            mp2[nums[i]]--;
            if(mp2[nums[i]]==0){
                mp2.erase(nums[i]);
            }
            i++;
        }
        if(mp2.size()<=(k-1)){
            cnt_km1+= (j-i+1);
        }
        j++;
      }
      return (cnt_k-cnt_km1);
    }
};