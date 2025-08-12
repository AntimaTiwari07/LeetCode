class Solution {
public:

    int numTrees(int n) {
        vector<int>dp(n+1);
       dp[0] = 1;
       dp[1] = 1;
       //value of n = i
       for(int i = 2;i<=n;i++){
        //root = j
        int ans = 0;
        for(int j = 1;j<=i;j++){
            ans+= dp[j-1]*dp[i-j];
        }
        dp[i] = ans;
       }
       return dp[n];
    }
};