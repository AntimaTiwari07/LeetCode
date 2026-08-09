class Solution {
public:
int solveforalice(int person,vector<int>& piles,int i,int m,vector<vector<vector<int>>>&dp){
   if(i>=piles.size())return 0;
   if(dp[person][i][m]!=-1)return dp[person][i][m];
   int stone = 0;
   int res = (person==1)?-1:INT_MAX;  //person1 = alice
   for(int x = 1;x<=min(2*m,(int)(piles.size()-i));x++){
    stone += piles[i+x-1];
     if(person==1){
        res = max(res,stone+solveforalice(0,piles,i+x,max(m,x),dp));
     }
     else{
        res = min(res,solveforalice(1,piles,i+x,max(m,x),dp));
     }
   }
   return dp[person][i][m] = res;

}
    int stoneGameII(vector<int>& piles) {
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(piles.size()+1,vector<int>(piles.size()+1,-1)));
        return solveforalice(1,piles,0,1,dp);
    }
};