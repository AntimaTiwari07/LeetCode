class Solution {
public:
    int countLargestGroup(int n) {
      unordered_map<int,int>mp;
      int maxsize =0;
      
      for(int i = n;i>=1;i--){
        int x = i;
        int sum = 0;
        while(x!=0){
            sum+=(x%10);
            x /=10;
        }
        mp[sum]++;
        maxsize = max(maxsize,mp[sum]);
      } 
      int cnt = 0;
      for(auto i:mp) {
         if(i.second==maxsize)cnt+=1;
      }
      return cnt;
    }
};