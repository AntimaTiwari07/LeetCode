class Solution {
public:
int MOD = 1000000007;
int fbu(int target,int n,int k){
     vector<vector<int>>dp(n+1,vector<int>(target+1,0));
     dp[0][0] = 1;
     for(int num = 1;num<=n;num++){
        for(int j = 1;j<=target;j++){
    int sum = 0;
    for(int i =1 ;i<=k;i++){
        if(j-i>=0){
        sum = (sum%MOD + dp[num-1][j-i]%MOD)%MOD;
        }
    }
    dp[num][j] = sum%MOD;
        }
    }
    return  dp[n][target];
}
    int numRollsToTarget(int n, int k, int target) {
        return fbu(target,n,k)%MOD;
    }
};