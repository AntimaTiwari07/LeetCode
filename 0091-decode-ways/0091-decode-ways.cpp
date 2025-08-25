class Solution {
public:
int solve(string s , int i,vector<int>&dp){
    if(i>=s.size())return 1;
    if(s[i]=='0')return 0;
    if(dp[i]!=-1)return dp[i];
    int onechar = solve(s,i+1,dp);
    int twochar = 0;
    if(i+1<s.size()){
    if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
        twochar = solve(s,i+2,dp);
    }
    }
    return dp[i] = onechar+twochar;
}
    int numDecodings(string s) {
        vector<int>dp(s.size()+1,-1);
        return solve(s,0,dp);
    }
};