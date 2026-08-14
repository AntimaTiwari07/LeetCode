class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int maxi = INT_MIN;
       int j = 0;
       int i = 0;
       int cnt = 0;
       while(j<s.size()){
         mp[s[j]]++;
         if(mp[s[j]]>2){
            while(mp[s[j]]>2){
                mp[s[i]]--;
                i++;
                cnt-=1;
            }
         }
         cnt+=1;
         j++;
         maxi = max(maxi,cnt);
       }
           maxi = max(maxi,cnt);
           return maxi;
    }
};