class Solution {
public:
bool Is_palindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i<=j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
void f(string &s,vector<string>&ans,vector<vector<string>>&res,int st){
    if(st==s.size()){
        res.push_back(ans);
        return;
    }
    string temp="";
    for(int i = st;i<s.size();i++){
        temp+=s[i];
        if(Is_palindrome(temp)){
            ans.push_back(temp);
            f(s,ans,res,i+1);
            ans.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        vector<vector<string>>res;
        f(s,ans,res,0);
        return res;
    }
};