class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = INT_MIN;
        int maxrep = 0;
        unordered_map<char,int>mp;
        int i = 0;
        int j = 0;
        while(j<s.size()){
           mp[s[j]]++;
           int size = j-i+1;
           maxrep = max(maxrep,mp[s[j]]);
            while(size-maxrep>k){
                 mp[s[i]]--;
                 i++;
               
                size = j-i+1;

                maxrep = max(maxrep,mp[s[i]]);
               
            }
             if(size-maxrep<=k){
            ans = max(ans,size);
           }
           j++;
        }
        return ans;
    }
};