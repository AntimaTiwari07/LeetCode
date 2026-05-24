class Solution {
public:
 int f(unordered_map<int,vector<int>>&mp,int i,vector<int>&dp){
    int maxi = INT_MIN;
    if(mp[i].size()==0)return 0;
    if(dp[i]!=-1)return dp[i];
    for(int j = 0;j<mp[i].size();j++){
        maxi = max(maxi,1+f(mp,mp[i][j],dp));
    }
    return dp[i] = maxi;
 }
    int maxJumps(vector<int>& arr, int d) {
       unordered_map<int,vector<int>>mp;
       int n = arr.size();
       for(int i = 0;i<arr.size();i++){
        for(int j = i+1;j<=min(n-1,i+d);j++){
            if(arr[j]>=arr[i])break;
                mp[i].push_back(j);
        }
         for(int j = i-1;j>=max(0,i-d);j--){
            if(arr[j]>=arr[i])break;
                mp[i].push_back(j);
        }
       }
       for(auto i:mp){
        vector<int>v = i.second;
        cout<<i.first<<"   ";
        for(int j = 0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;
       }
       int maxi = INT_MIN;
       vector<int>dp(arr.size(),-1);
     for(int i = 0;i<arr.size();i++){
        maxi = max(maxi,f(mp,i,dp));
     }
      return maxi+1;
    }
};