class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        vector<int>dp(stoneValue.size()+1,-1);
         dp[stoneValue.size()]=0;
         
         for(int i = stoneValue.size()-1;i>=0;i--){
            int diff = INT_MIN;
         diff = max(diff,stoneValue[i]-dp[i+1]);
         if(i+1<stoneValue.size()) diff = max(diff,stoneValue[i]+stoneValue[i+1] - dp[i+2]);
         if(i+2<stoneValue.size()) diff = max(diff,stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-dp[i+3]);
         dp[i] = diff;
         }
        if(dp[0]>0)return "Alice";
        else if(dp[0]==0)return "Tie";
        return "Bob";
    }
};