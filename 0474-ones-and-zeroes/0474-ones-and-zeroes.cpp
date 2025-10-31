class Solution {
public:
int f(vector<string>& strs, int m, int n,int i ,int zero,int one,vector<vector<vector<int>>>&dp){
    if(i==strs.size()){
        return 0;
    }
    if(dp[i][zero][one]!=-1)return dp[i][zero][one];
    int z = 0,o = 0;
    for(int j = 0;j<strs[i].size();j++){
        if(strs[i][j]=='0')z+=1;
        else o+=1;
    }
    int take = 0;
    if(zero+z<=m && one+o<=n){
        take = 1 + f(strs,m,n,i+1,zero+z,one+o,dp);
    }
    int not_take = f(strs,m,n,i+1,zero,one,dp);
    return dp[i][zero][one] =  max(take,not_take);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>>dp(600,vector<vector<int>>(105,vector<int>(105,-1)));
        return f(strs,m,n,0,0,0,dp);
        
    }
};