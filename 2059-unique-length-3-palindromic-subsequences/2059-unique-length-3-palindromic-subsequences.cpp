class Solution {
public:
    int countPalindromicSubsequence(string s) {
    unordered_map<char,int>mp;
    for(int i= 0;i<s.size();i++){
        mp[s[i]]++;
    }
    int ans=0;
    for(auto i:mp){
        int first = -1;
        int second =-1;
        if(i.second>1){
            for(int j =0;j<s.size();j++){
                if( first != -1 && s[j]==i.first){
                    second = j;
                }
                else if(first == -1 && s[j]==i.first){
                    first = j;
                }
            }
            unordered_map<char,int>inner_cnt;
            while(first+1<second){
                inner_cnt[s[first+1]]++;
                first++;
            }
            ans+=inner_cnt.size();
        }
    }
    return ans;
    }
};