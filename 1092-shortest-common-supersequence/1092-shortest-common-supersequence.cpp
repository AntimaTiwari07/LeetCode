class Solution {
public:
     string solve(string str1,string str2,vector<vector<int>>&dp){
        string temp = "";
        int idx = -1;
        vector<string>v;
        for(int i = 0;i<str1.size();i++){
            for(int j = 0;j<str2.size();j++){
                if(str1[i]==str2[j]){
                    dp[i+1][j+1] = dp[i][j]+1;
                }
                else{
                    dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        int maxi  = dp[str1.size()][str2.size()];
        cout<<"maxi = "<<dp[str1.size()][str2.size()];
        string s = "";
        int i = str1.size();
        int j = str2.size();
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
               s+=str1[i-1];
                i = i-1;
                j = j-1;
            }
            else{
                if(dp[i-1][j]>=dp[i][j-1]){
                   i--;
                }
                else j--;
            }
        }
        reverse(s.begin(),s.end());
        return s;
     }
    string shortestCommonSupersequence(string str1, string str2) {
        vector<vector<int>>dp(str1.size()+1,vector<int>(str2.size()+1,0));
        
        string ans = solve(str1,str2,dp);
        cout<<ans<<endl;
        int j = 0;
        int  i = 0;
        int k = 0;
        string res = "";
        while(j<ans.size()){
            string x = "";
            string y = "";
            while(i<str1.size() && str1[i]!=ans[j]){
                x+=str1[i];
                i++;
            }
            while(k<str2.size() && str2[k]!=ans[j]){
                y+=str2[k];
                k++;
            }
            res = res+x+y+ans[j];
            j++;
            i++;
            k++;
        }
        while(i<str1.size()){
            res+=str1[i];
            i++;
        }
        while(k<str2.size()){
            res+=str2[k];
            k++;
        }
        return res;
    }
};