class Solution {
public:
int solve(string &word1, string &word2,int i,int j,vector<vector<int>>&dp){
    if(i==word1.size() || j==word2.size()){
        return  max(word1.size()-i,word2.size()-j);
    }
    if(dp[i][j]!=-1)return dp[i][j];
    int not_take =INT_MAX,take= INT_MAX;
    if(word1[i]==word2[j]){
        not_take = 0+solve(word1,word2,i+1,j+1,dp);
    }
    else{
         take = min({1+solve(word1,word2,i+1,j+1,dp),1+solve(word1,word2,i+1,j,dp),1+solve(word1,word2,i,j+1,dp)});
    }
    return dp[i][j] = min(take,not_take);
}
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        return solve(word1,word2,0,0,dp);
    }
};