class Solution {
public:
int dp(int n,vector<int>&v){
    if(n==0)return 1 ;
    if(n<0)return 0;
    if(v[n]!=-1)return v[n];
     return v[n]=dp(n-1,v)+dp(n-2,v);
      
}
int tdp(int n){
    vector<int>dp(n+1,0);
    dp[0]=1;
    dp[1] = 1;
    for(int i = 2;i<=n;i++){
      dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}
    int climbStairs(int n) {
       vector<int>v(n+1,-1);
        return tdp(n);
    }
};