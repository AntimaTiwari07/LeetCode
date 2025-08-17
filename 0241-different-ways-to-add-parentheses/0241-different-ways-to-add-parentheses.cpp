class Solution {
public:
vector<int> solve(string &s,vector<vector<vector<int>>>&dp,int st,int end){
      vector<int>res;
      if(!dp[st][end].empty())return dp[st][end];
    for(int i = st;i<=end;i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='*'){
            vector<int>left= solve(s,dp,st,i-1);
            vector<int>right = solve(s,dp,i+1,end);
//add operation to merge both vectors 
     
        for(int j = 0;j<left.size();j++){
            for(int k = 0;k<right.size();k++){
                if(s[i]=='+'){
                    res.push_back(left[j]+right[k]);
                }
                else if(s[i]=='-'){
                    res.push_back(left[j]-right[k]);
                }
                else {
                    res.push_back(left[j]*right[k]);
                }
            }
        }
    }   
}

  if (res.empty()) {
    res.push_back(stoi(s.substr(st, end - st + 1)));
  }

 dp[st][end] = res;
 return res;
}
    vector<int> diffWaysToCompute(string expression) {
        vector<vector<vector<int>>>dp(expression.size(),vector<vector<int>>(expression.size()));
        vector<int>ans;
         ans = solve(expression,dp,0,expression.size()-1);
         return ans;
    }
};