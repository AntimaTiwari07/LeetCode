class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int i = 0;
       int j = 0;
       int n = s.size();
       int maxsize = 0;
       unordered_map<char,int>mp;
       while(i<n && j<n){
        mp[s[j]]++;
        while(mp[s[j]]>1){
            mp[s[i]]--;
            i++;
        }
         maxsize = max(maxsize,(j-i+1));
        j++;
       }
       return maxsize;
    }
};