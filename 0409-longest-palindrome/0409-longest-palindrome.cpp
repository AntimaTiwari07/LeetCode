class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        bool odd = false;
        int ans = 0;
        for(auto i:mp){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                ans+=(i.second-1);
                odd = true;
            }
        }
        if(odd)return ans+1;
        return ans;
    }
};