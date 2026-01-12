class Solution {
public:
bool isvalid(string &temp,string &s ,int idx){
    // cout<<temp<<" "<<idx<<endl;
    for(int i = 0;i<temp.size();i++){
        if(s[idx+i]!=temp[i])return false;
    }
    return true;
}
vector<string> f(char ch,vector<string>& wordDict){
    vector<string>v;
    for(int i = 0;i<wordDict.size();i++){
        if(wordDict[i][0]==ch)v.push_back(wordDict[i]);
    }
    return v;
}
bool solve(string s,int i,vector<string>&wordDict,vector<int>&dp){
    if(i==s.size())return true;
    if(dp[i]!=-1) return dp[i];
    vector<string>v = f(s[i],wordDict);
    if(v.size()==0)return false;
        for(int j = 0;j<v.size();j++){
            if(isvalid(v[j],s,i)){
                if(solve(s,i+v[j].size(),wordDict,dp))return dp[i] = 1;
            }
        }
    return dp[i] = 0;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
        return solve(s,0,wordDict,dp);
    }
};