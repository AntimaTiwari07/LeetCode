class Solution {
public:
bool valid(string &s){
   stack<char>st;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='(')st.push('(');
        else if(!st.empty())st.pop();
        else return false;
    }
    if(!st.empty())return false;
    return true;
}
 void solve(int num,string temp,int i,vector<string>&ans){
    if(i>num){
        if(valid(temp)){
            ans.push_back(temp);
        }
        return;
    }
    solve(num,temp+"(",i+1,ans);
    solve(num,temp+")",i+1,ans);
 }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(n*2,"",1,ans);
        return ans;
    }
};