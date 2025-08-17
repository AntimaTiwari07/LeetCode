class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int st = 0;
       int end = 0;
       int maxi = 0;
       unordered_map<char,int>mp;
       while(st<s.size() && end<s.size()){
        mp[s[end]]++;
        if(mp[s[end]]>1){
            while(st<s.size() && s[st]!=s[end]){
                mp[s[st]]-=1;
                st+=1;
            }
             mp[s[st]]-=1;
            st+=1;   
        }   
             maxi = max(maxi , end-st+1);
        end+=1;
       } 
       return maxi;
    }
};