class Solution {
public:
    bool canConstruct(string s, int k){
        int count[26]={0};
        for(int i =0;i<s.size();i++){
            count[s[i]-97]++;
        }
        int cnt = 0;
        for(int i = 0;i<26;i++){
            if(count[i]%2!=0)cnt++;
        }
        if(s.size()<k)return false;
    if(cnt>k)return false;
    return true;
    }
};