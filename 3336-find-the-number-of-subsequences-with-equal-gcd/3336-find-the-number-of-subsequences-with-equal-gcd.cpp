#define MOD 1000000007
class Solution {
public:

int gcdd(int a,int b){
    if(a==0)return b;
    if(b==0) return a;
    if(a<b){
        swap(a,b);
    }
    return gcdd(a-b,b);
}
int f(vector<int>& nums,int i,int seq1,int seq2,vector<vector<vector<int>>>&dp){
    if(i>=nums.size()){
        if(seq1!=0 && seq2!=0 && seq1==seq2)return 1;
       return 0;
    }
    if(dp[i][seq1][seq2]!=-1)return dp[i][seq1][seq2];
    //seq1
    int x = f(nums,i+1,gcdd(seq1,nums[i]),seq2,dp)%MOD;
    //seq2
    int y = f(nums,i+1,seq1,gcdd(seq2,nums[i]),dp)%MOD;
    //not take;
    int z = f(nums,i+1,seq1,seq2,dp)%MOD;
     return dp[i][seq1][seq2]= ((x+y)%MOD+z)%MOD;
}
    int subsequencePairCount(vector<int>& nums) {
        vector<vector<vector<int>>>dp(nums.size(),vector<vector<int>>(201,vector<int>(201,-1)));
        return f(nums,0,0,0,dp);
    }
};