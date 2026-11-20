class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(j<s.size()){
            mp[s[j]]++;
            ans = max(ans,(int)mp.size());
            while(mp[s[j]]>1){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};